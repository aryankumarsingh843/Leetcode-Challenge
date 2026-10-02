class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n = nums.size();

        int len = 1;
        int maxLen = 0;

        for (int i=1; i<n; i++){
            
            int diff = nums[i] - nums[i-1];

            if (diff == 1){
                if (len == 1) len = 2;
                else if (nums[i-1] - nums[i-2] == -1) len++;
                else len = 2;
            }

            else if (diff == -1 && len >= 2){
                if (nums[i-1] - nums[i-2] == 1) len++;
                else len = 1;
            }

            else len = 1;

            maxLen = max(maxLen, len);
        }

            if (maxLen < 2) return -1;

            return maxLen;
    }
};
            