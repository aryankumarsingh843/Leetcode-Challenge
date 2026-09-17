class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        vector <int> p1;
        vector <int> p2;

        for (int i=0; i<s.size(); i++){
            for (int j=0; j<=i; j++){
                if (s[i] == s[j]){
                    p1.push_back(j);
                    break;
                }
            }
        }

        for (int i=0; i<t.size(); i++){
            for (int j=0; j<=i; j++){
                if (t[i] == t[j]){
                    p2.push_back(j);
                    break;
                }
            }
        }

        if (p1 != p2) return false;
        return true;
    }
};