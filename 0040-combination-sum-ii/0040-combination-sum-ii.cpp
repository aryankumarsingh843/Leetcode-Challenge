class Solution {
    void combination(vector <int>& v, vector<vector<int>>& ans, vector <int>& arr, int n, int k, int idx){
        if (k == 0){
            ans.push_back(v);
            return;
        }
        if (k < 0) return;
        for (int i=idx; i<n; i++){
            if (i > idx && arr[i] == arr[i-1]) continue;
            v.push_back(arr[i]);
            combination(v, ans, arr, n, k-arr[i], i+1);
            v.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;
        vector <int> v;
        sort (candidates.begin(), candidates.end());
        combination(v, ans, candidates, n, target, 0);
        return ans;
    }
};