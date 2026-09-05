class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {

       vector <string> v;

       long long volume = 1LL * length * width * height;

       bool bulky = (length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000);

       bool heavy = (mass >= 100);

       if (bulky && heavy){
        v.push_back("Both");
       }

       else if (bulky){
        v.push_back("Bulky");
       }

       else if (heavy){
        v.push_back("Heavy");
       }

       else {
        v.push_back("Neither");
       }

       return v[0];
    }
};