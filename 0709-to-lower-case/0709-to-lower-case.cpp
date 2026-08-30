class Solution {
public:
    string toLowerCase(string s) {
        char ch;
        for (int i=0; i<s.length(); i++){
           s[i] = tolower(s[i]);
        }
        return s;
    }
};