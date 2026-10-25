class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();

        vector <int> small;
        vector <int> equal;
        vector <int> large;

        for (int i=0; i<n; i++){
            if (nums[i] < pivot){
                small.push_back(nums[i]);
            }
            else if (nums[i] == pivot){
                equal.push_back(nums[i]);
            }
            else {
                large.push_back(nums[i]);
            }
        }

        vector <int> ans;

        for (int i=0; i<small.size(); i++){
            ans.push_back(small[i]);
        }

        for (int i=0; i<equal.size(); i++){
            ans.push_back(equal[i]);
        }

        for (int i=0; i<large.size(); i++){
            ans.push_back(large[i]);
        }

        return ans;
    }
};