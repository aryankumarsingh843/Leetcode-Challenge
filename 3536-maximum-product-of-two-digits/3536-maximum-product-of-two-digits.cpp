class Solution {
public:
    int maxProduct(int n) {
        vector <int> v;
     while (n>0){
     int lastdigit = n%10;
     v.push_back(lastdigit);
     n/=10;
     }
     sort(v.begin(), v.end());
     int m = v.size();
     return v[m-1]*v[m-2];
    }
};