class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
       int n = nums.size();

       long long sum = 0;
       for (int i=0; i<n; i++){
        sum += nums[i];
       }

       int rem = sum%p;

       if (rem == 0) return 0;

       unordered_map<int, int> ans;
       ans[0] = -1;

       long long prefix = 0;
       int answer = n;

       for (int i=0; i<n; i++){
        prefix += nums[i];
        int current = prefix%p;

        int target = (current - rem + p)%p;

        if (ans.find(target) != ans.end()){
            int len = i-ans[target];
            answer = min(answer, len);
        }
        ans[current] = i;
       }
       return answer == n ? -1 : answer;
    }
};