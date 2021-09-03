// 1- Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int numrem = 0;
        for(int i = 0 ; i  < nums.size(); i++){
            if(nums[i] == val){
                numrem++;
                continue;
            }
            nums[i - numrem] = nums[i];
        }
        return nums.size() - numrem;
    }
        
};
// 2- Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int num = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                num++ ;  
            } else {
                nums[i - num] = nums[i];
                if(num != 0){
                    nums[i] = 0 ;  
                }
            }
        }
    }
};

// 3- Reverse Vowels of a String

class Solution {
public:
    string reverseVowels(string s) {
        if(!s.length()) 
            return "";
		char *c = new char(s.size());
		char *r = new char(s.length() + 1);
		int i = 0, j = 0;
		for( i = 0; i < s.length(); i++ ){
			char cin = s[i];
			if( cin == '\\' ) 
                continue;
			if( cin == 'a' || cin == 'e' || cin == 'i' || cin == 'o' || cin == 'u' )
				c[j++] = cin;
		}
		c[j--] = 0;
		for( i = 0; i< s.length(); i++ ) {
			char cin = s[i];
			if( cin == '\\' ) continue;
			if( cin  == 'a' ||cin  == 'e' || cin  == 'i' || cin  == 'o' || cin  == 'u' ){
					cin = c[j--];
					r[i] = cin;
			}
			else r[i] = cin;
		}
		r[s.length()] = '\0';
		s.clear();
		s.append(r);
		return s;
	}
        
};

// 4- Is Subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_aux = 0;
        int t_aux = 0;
        if(s.length() == 0){
            return true;
        }
        while(t_aux < t.length()){
            if(s[s_aux] == t[t_aux]){
                s_aux++;
            }
            if(s_aux == s.length()){
                return true;
            }
            t_aux++;
        }
        return false;
    }
        
};
