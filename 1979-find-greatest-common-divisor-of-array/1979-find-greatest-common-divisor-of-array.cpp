class Solution {
    private: 
    int gcd(int a, int b){
        for (int i=min(a,b); i>=2; i--){
            if (a%i==0 && b%i==0) return i;
        }
        return 1;
    }
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int min1 = INT_MAX;
        int max1 = INT_MIN;

        for (int i=0; i<n; i++){
            if (min1 > nums[i] ) min1 = nums[i];
        }

        for (int i=0; i<n; i++){
            if (max1 < nums[i]) max1 = nums[i];
        }
        for (int i=min(min1,max1); i>=2; i--){
            if (min1%i==0 && max1%i==0) return i;
        }
        return 1;
    }
};