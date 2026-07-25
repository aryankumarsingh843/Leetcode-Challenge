class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special){
    int n = special.size();

    sort (special.begin(), special.end());

     int ans = special[0] - bottom; // first side element

    for (int i=1; i<n; i++){
        ans = max(ans, special[i] - special[i-1] - 1); // Middle element
    }

    return ans = max(ans, top - special[n-1]); // Last side element
    }
};