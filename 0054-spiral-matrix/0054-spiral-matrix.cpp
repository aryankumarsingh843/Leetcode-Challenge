class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int n = matrix.size();
      int m = matrix[0].size();
      int count=0;
      vector <int> v;
      int minr=0, minc=0, maxr=n-1, maxc=m-1;
      while (minr <=maxr && minc <= maxc){
        for (int j=minc; j<=maxc; j++){
            v.push_back(matrix[minr][j]);
            count++;
        }
        minr++;
        if (minr > maxr || minc > maxc) break;
        for (int i=minr; i<=maxr; i++){
            v.push_back(matrix[i][maxc]);
            count++;
        }
        maxc--;
        if (minr > maxr || minc > maxc) break;
        for (int j=maxc; j>=minc; j--){
            v.push_back(matrix[maxr][j]);
            count++;
        }
        maxr--;
        for (int i=maxr; i>=minr; i--){
            v.push_back(matrix[i][minc]);
            count++;
        }
        minc++;
      }
      return v;
    }
};