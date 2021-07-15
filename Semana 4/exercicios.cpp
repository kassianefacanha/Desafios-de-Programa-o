//1-Remove Outermost Parentheses


//2- Assign Cookies

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
     int res = 0;
     int aux = 0;
   for(int i = 0; i < g.size(); i++) {
        for(int j = aux; j < s.size(); j++) {
            if(s[j] >= g[i]) {
                res++;
                aux = j + 1;
                break;
            }  
        }
         
    }
    return res;
    }
};

//3-Maximum Units on a Truck

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
          sort(boxTypes.begin(), boxTypes.end(),[](const vector<int> &a, const vector<int> &b){
                    return (a[1]>b[1]);
                });
        int i = 0;
        int j = 0;
        int res = 0;
        while(j<boxTypes.size() && i<truckSize){
            int k = min(boxTypes[j][0],truckSize-i);
            i += k;
            res += k*boxTypes[j][1];
            j++;
        }
        return res;
    }
};
//4-Minimum Subsequence in Non-Increasing Order
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int a=0;
        int b=0;
        vector<int>res;
        sort(res.begin(),res.end(),std::greater<>());
        sort(nums.begin(),nums.end(),std::greater<>());
        for(int i=0;i<nums.size();i++){
            a+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            b+=nums[i];
            a=a-nums[i];
            res.push_back(nums[i]);
            if(b>a)
                break;
        }
        return res;
        
    }
};

