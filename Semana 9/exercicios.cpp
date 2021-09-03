// 1- Find Pivot Index
class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        int aux = x ^ y;
        while(aux > 0){
            ans += aux & 1;
            aux = aux >> 1;
        }
        return ans;
    }
        
};
// 2-  Prime Number of Set Bits in Binary Representation
class Solution {
public:

    
int countPrimeSetBits(int left, int right) {
int ans= 0;
	while(left <= right){
		int n = 0, cnt = 0 ,left = 0;
		while(n > 0){
			if(n == 1) {
				cnt++;
			}
			n >>= 1;
		}

		if(cnt > 1){
			ans++;
			for(n = 2; n*n <= cnt; n++) {
				if(cnt%n == 0) {
					ans--;
					break;
				}
			}
		}
		left++;
	}

	return ans;
}

};

// 3- Maximum XOR for Each Query

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
    int const max = (2 << (maximumBit - 1)) - 1;
      for (int i = 1; i < nums.size(); i++) {
        nums[i] = nums[i] ^ nums[i - 1];
      }
         reverse(nums.begin(), nums.end());
      return  nums;
        
    }
};

// 4- Number of Steps to Reduce a Number to Zero

class Solution {
public:
    int numberOfSteps(int num) {
    int i = 0;
    int numDev = num;
    
    while(numDev != 0) {
        if(numDev % 2 == 0) {
            numDev = numDev / 2;
        } else {
            numDev -= 1;
        }
        i += 1;
    }
    return i;
        
    }
};
// 5- Power of Four
class Solution {
public:
    bool isPowerOfFour(int n) {
        int count = 0;
        if(n > 0){
            if((n & (n-1))==0){
            while(n != 1){
                count++; 
                n >>= 1;
            }
        
        if((count & 1)==0) 
            return true;
        }
    }
        return false;
        
        
    }
};
