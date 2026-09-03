class Solution {
public:
    string greatestLetter(string s) {
       bool upper[26] = {false};
       bool lower[26] = {false};

       for (int i=0; i<s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            upper[s[i]-'A'] = true;
        }
        else {
            lower[s[i]-'a'] = true;
        }
       }

       for (int i=25; i>=0; i--){
        if (lower[i] && upper[i]){
            return string(1, 'A'+i);
        }
       }
       return "";
    }
};