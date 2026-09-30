class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int n = nums.size();   

    int maxLen = INT_MIN;
    int sum = 0;
    int i=0;

    while (i<n){
        sum += nums[i];

        maxLen = max(maxLen, sum);

        if (sum < 0){
            sum = 0;
        }

        i++;
    }
    return maxLen;
    }
};