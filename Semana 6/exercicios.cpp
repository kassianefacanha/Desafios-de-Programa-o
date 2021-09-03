//2-  Sum of All Subset XOR Totals

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int time = pow(2, n);
        int ans = 0;
        
        for (int j = 0; j < time; j++) {
            int aux = 0;
            for (int i = 0; i < n; i++) {
                if ((j & (1 << i)) > 0) {
                    aux ^= nums[i];
                }
            }
            ans += aux;
        }
        
        return ans;
        
    }
};