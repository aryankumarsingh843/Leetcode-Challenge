class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
    int n = nums.size();

    unordered_map<int, int> ans;
    ans[0] = 1;

    int prefix=0;
    int count=0;

    for (int i=0; i<n; i++){
        if (nums[i]%2!=0) prefix++;

        int target = prefix-k;

        if (ans.find(target) != ans.end()){
            count += ans[target];
        }
        ans[prefix]++;
    }
    return count;
     }
};