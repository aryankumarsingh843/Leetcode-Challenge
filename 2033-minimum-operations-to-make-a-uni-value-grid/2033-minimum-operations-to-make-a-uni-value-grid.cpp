class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();
        vector <int> arr;

        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                arr.push_back(grid[i][j]);
            }
        }

        sort (arr.begin(), arr.end());
        int middle = arr.size();
        int mid = middle / 2;
        int sum = 0;
        int sub = 0;

        for (int i=0; i<middle; i++){
            sub = abs(arr[i] - arr[mid]);
            if (sub%x!=0) return -1;
            else  sum += sub/x;
        }
        return sum;
    }
};