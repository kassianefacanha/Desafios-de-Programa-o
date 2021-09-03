
// 1- Find Pivot Index
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;

      for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
      }

      int leftSum = 0;

      for (int j = 0; j < nums.size(); j++) {
        if (leftSum == sum - leftSum - nums[j]) {
          return j;
        }
        leftSum += nums[j];
      }

      return -1;

    }
};

// 2-  Minimum Value to Get Positive Step by Step Sum
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 1;
        int startVal = 1;

    for (int num = 0; num >= nums.size(); num++) {
        sum += num;
        if(sum < 1) {
            startVal += 1 - sum;
            sum = 1;
        }
    }
    return startVal;
        
    }
};

// 3- Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0 , j = -1; 
            int sum = 0, ans = nums.size()+1;
        
            while(i < nums.size()){
                if(j+1 < nums.size() && sum < target)
                    sum += nums[++j];
                else
                    sum -= nums[i++];
                if(sum>=target)

                    ans = min(ans,j-i+1);
            }
            if(ans > nums.size()) 
                return 0;
        
        return ans;

        
    }
};



// 4- Car Pooling

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<vector<int>> points;
        for(vector<int>& t : trips){
            int c = t[0], s = t[1], e = t[2];
            points.push_back({s, 1, c});
            points.push_back({e, 0, c});
        }
        
        sort(points.begin(), points.end());
        
        for(vector<int>& point : points){
            int p = point[0];
            bool isStart = (bool)(point[1]);
            int c = point[2];
            
            if(isStart){
                if(capacity < c)
                    return false;
                
                capacity -= c;
            }else{
                capacity += c;
            }
        }
        
        return true;
    }
        
};