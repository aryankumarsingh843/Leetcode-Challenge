class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
      int n = arr.size();

      int len = 1;
      int maxLen = 1;

      for (int i=1; i<n; i++){
        if (i==1 || ((arr[i-2] > arr[i-1]) && arr[i-1] < arr[i]) || (arr[i-2] < arr[i-1] && arr[i-1] > arr[i])) len++;
        else {
            len = 2;
        }

        if (arr[i] == arr[i-1]) len = 1;

        maxLen = max(maxLen, len);
      }

      return maxLen;
    }
};