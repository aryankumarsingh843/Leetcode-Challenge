class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int min1 = INT_MAX;
        int max1 = INT_MIN;
         // Minimum find
        for (int i=0; i<n; i++){
            if (min1 > nums[i] ) min1 = nums[i];
        }
        // Maximum find
        for (int i=0; i<n; i++){
            if (max1 < nums[i]) max1 = nums[i];
        }

        // For hcf
        for (int i=min(min1,max1); i>=2; i--){
            if (min1%i==0 && max1%i==0) return i;
        }
        return 1;
    }
};