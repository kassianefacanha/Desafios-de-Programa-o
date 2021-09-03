//1-  N-Repeated Element in Size 2N Array

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int len = nums.size() / 2, count = 1, ans;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums.at(i) == nums.at(j)) {
					count++;
					ans = nums.at(i);
				}
			}
			if (count > 1) {  
				cout << ans;
				break;
			}
		}
		return ans;
        
    }
};

//3- Intersection of Two Arrays
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter;
        int i = 0, j = 0;

        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j]) {
                inter.emplace_back(nums1[i]);
                ++i, ++j;
            }
            else if(nums1[i] < nums2[j])
                ++i;
            else if(nums1[i] > nums2[j])
                ++j;
        }

        return inter;
    }
};

//4- Intersection of Two Arrays

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> nums;
        unordered_set<int> times;

        for (int num : arr)
            ++nums[num];
    

        for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
            if (times.count(iter->second) != 0) {
                return false;
            }

            times.insert(iter->second);
        }

        return true;
    }
        
};