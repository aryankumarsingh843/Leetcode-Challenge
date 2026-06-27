class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       int n = nums.size();

       vector <int> v(n);
       int sum = 0;
       for (int i=0; i<n; i++){
        sum += nums[i];
       }
       int cs = 0; // cumulative sum

       for (int i=0; i<n; i++){
        int ls = cs;  // left sum
        cs += nums[i];  // update the value
        int rs = sum - cs;  // right sum

        v[i] = abs(rs - ls);
       }
       return v;
    }
};