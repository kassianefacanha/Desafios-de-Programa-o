//1-Remove Outermost Parentheses
class Solution {
public:
    string removeOuterParentheses(string s) {
        static const int i = 1;
        string j;
        int k = 0;
        for (const auto& l : s) {
            if ((l == '(')&&( k++ >= i)) j += l;
            if ((l == ')') && (k-- > i)) j += l;
        }
        return j;
    }
};

//2- Build an Array With Stack Operations
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
    vector<string> res;
    int i = 1;
    int j = 0;
    for (int i = 1; i <= n; ++i) {
      if (j >= target.size()) { break; }
      res.push_back("Push");
      if (target[j] == i) {
        ++j;
      } else {
        res.push_back("Pop");
      }
    }
    return res;
    }
};

//3-Baseball Game


//4-Make The String Great
class Solution {
public:
    string makeGood(string s) {
        string res;
        stack<char> pilha;
        for(int i = 0; i < s.size(); ++i){
            if(!pilha.empty() && ((s[i]-pilha.top()==32) || (pilha.top()-s[i]==32)))
                pilha.pop();
            else pilha.push(s[i]);
        }
        while(!pilha.empty()){
            res = pilha.top()+res;
            pilha.pop();
        }
        return res;
    }
};
//5-Minimum Add to Make Parentheses Valid

class Solution {
public:
    int minAddToMakeValid(string s) {
        int i = 0;
        int j = 0;
        int aux;
    	for (auto &S : s) {
    		if (S == '(') j++;
    	    if (S == ')') {
    			j--;
    			if (j == -1) {  j = 0; i++; }
    		}
    		}
    	aux = i + j;
        return  aux;
    }
};