class Solution {
public:
    bool checkZeroOnes(string s) {
        int one = 0;
        int zero = 0;
        int ans0 = 0;
        int ans1 = 0;

        for (int i=0; i<s.length(); i++){
            if (s[i] == '0'){
                zero++;
                one = 0;
            }
            else {
                one++;
                zero = 0;
            }

            ans0 = max(ans0, zero);
            ans1 = max(ans1, one);
        }

        if (ans1 > ans0) return true;
        return false;
    }
};