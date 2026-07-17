class Solution {
    private:
    void combination(vector <int>& v, vector<vector<int>>& ans, vector<int>& candidates, int n, int k, int idx){
        if (k == 0){
            for (int i=0; i<v.size(); i++){
             ans.push_back(v);
            return;
            }
        }
        if (k < 0) return;
        for (int i=idx; i<n; i++){
            v.push_back(candidates[i]);
            combination(v, ans, candidates, n, k-candidates[i], i);
            v.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;
        vector <int> v;
        combination(v, ans, candidates, n, target, 0);
        return ans;
        
    }
};