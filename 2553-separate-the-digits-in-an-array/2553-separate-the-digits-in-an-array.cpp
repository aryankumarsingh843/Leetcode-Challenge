class Solution {
public:
   vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans;
        for (int i=0; i<n; i++){
            int num = nums[i];
            vector <int> v;
            while (num > 0){
                v.push_back(num%10);
                num = num / 10;
            }
            for (int j = v.size()-1; j>=0; j--){
                ans.push_back(v[j]);
            }
        }
        return ans;
   }
};