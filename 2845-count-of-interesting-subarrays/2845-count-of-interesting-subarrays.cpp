class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
      int n = nums.size();

      unordered_map<int, int> ans;
      ans[0] = 1;

      long long prefixSum = 0;
      long long count = 0;

      for (int i=0; i<n; i++){
        if (nums[i]%modulo==k) prefixSum++;

        int rem = prefixSum%modulo;

        int required = (rem - k + modulo)%modulo;

        count += ans[required];

        ans[rem]++;
      }
      return count;
    }
};