class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();

        unordered_map<int, int> ans;
        ans[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for (int i=0; i<n; i++){
            prefixSum += nums[i];

            int required = prefixSum - goal;

            count += ans[required];

            ans[prefixSum]++;
        }
        return count;
    }
};