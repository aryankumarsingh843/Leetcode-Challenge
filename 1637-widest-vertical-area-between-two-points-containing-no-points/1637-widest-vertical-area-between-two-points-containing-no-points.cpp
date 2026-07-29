class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        int ans = 0;
        
        sort (points.begin(), points.end());

        for (int i=1; i<points.size(); i++){
            int diff = points[i][0] - points[i-1][0];
            ans = max(ans, diff);
        }
        return ans;
    }
};