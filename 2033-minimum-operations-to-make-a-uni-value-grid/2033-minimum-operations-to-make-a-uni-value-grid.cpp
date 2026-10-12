class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
    int n = grid.size();
    int m = grid[0].size();
    vector <int> arr;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            arr.push_back(grid[i][j]);
        }
    }

    sort (arr.begin(), arr.end());
    int len = arr.size();
    int mid = len/2;
    int sum = 0;
    int sub = 0;

    for (int i=0; i<len; i++){
        sub = abs(arr[i] - arr[mid]);

        if (sub%x!=0) return -1;
        else sum += sub/x;
    }

    return sum;
    }
};