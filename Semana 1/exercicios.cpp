//1- Find Numbers with Even Number of Digits

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0, num = 0 ;
    for (int i = 0; i < nums.size(); ++i) {
            int aux = 0;
            num = nums[i];
            while ((num) != 0) {
            num /= 10;
                aux++;
           }
            if (aux % 2 == 0) count++;
            
        }
        
        return count;
    }
};

//2- Shuffle the Array

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> newVector(nums.size());
    int j = n, aux = 0;
    for(int i = 0; i < n;  i++){
      newVector[aux++] = nums[i];
      newVector[aux++] = nums[j];
      ++j;
    }
    return newVector;
    }
  };


//3- Decompress Run-Length Encoded List

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
         vector<int> vet;
    for(int i=0;i<nums.size();i+=2){
        for(int j=0;j<nums[i];j++)
            vet.push_back(nums[i+1]);
    }
    return vet;
    }
};
    

//4- Count Items Matching a Rule

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index;
   if(ruleKey == "type") return index = 0;
   if(ruleKey == "color") return index = 1;
        else return index = 2;
        
        int res = 0;
        for(int i = 0;i < items.size();i++)
        {
            if(items[i][index] == ruleValue)
                res += 1;
        }
        
    }
};
