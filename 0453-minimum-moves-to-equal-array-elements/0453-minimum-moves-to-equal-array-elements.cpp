class Solution {
public:
    int minMoves(vector<int>& nums) {
      int n = nums.size(); 
      int min = INT_MAX;
      int sub=0;
      int sum=0;
      for (int i=0; i<n; i++) {
        if (min > nums[i]) min = nums[i];
    }

    for (int i=0; i<n; i++){
        sub = nums[i] - min;
        sum += sub;
    }

    return sum;
    }
};