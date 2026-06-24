class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();

       /* sort (arr.begin(), arr.end());
        int i=0;
        int j=n-1;
        while (i<j){
            if (arr[j] == 2*arr[i]) return true;
            
            else if (arr[j] > 2*arr[i]) i++;

            else j--;
        }
        return false; */

        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (i != j && arr[i] == 2*arr[j]){
                return true;
            }
         }
        }
        return false;
    }
};