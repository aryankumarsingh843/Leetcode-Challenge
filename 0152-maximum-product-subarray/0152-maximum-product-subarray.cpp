class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int maxLen = INT_MIN;

        int pre=1;
        int suf=1;

        int i=0;

        while (i<n){

            if (pre == 0) pre=1;
            if (suf == 0) suf=1;

            pre *= nums[i];
            suf *= nums[n-i-1];
            
            maxLen = max(maxLen , max(pre, suf));
            i++;
        }

        return maxLen;
    }
};