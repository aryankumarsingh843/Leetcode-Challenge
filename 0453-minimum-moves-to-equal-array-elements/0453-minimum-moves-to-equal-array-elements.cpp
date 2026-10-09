class Solution {
public:
    int minMoves(vector<int>& nums) {
      int n = nums.size();
      int min = INT_MAX;

      for (int i=0; i<n; i++){
        if (min > nums[i]) min = nums[i];  //Minimum element ko find karna hai
      }

      int sum = 0;
      int sub = 0;

      for (int i=0; i<n; i++){
        sub = nums[i] - min;
        sum += sub;
      }

      return sum;
    }
};