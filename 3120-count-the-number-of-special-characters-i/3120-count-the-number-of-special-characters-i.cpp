class Solution {
public:
    int numberOfSpecialChars(string word) {
       bool lower[26] = {};
       bool upper[26] = {};

       for (int i=0; i<word.size(); i++){
        if (word[i] >= 'a' && word[i] <= 'z'){
            lower[word[i]-'a'] = true;
        }
        else {
            upper[word[i]-'A'] = true;
        }
       }

       int ans = 0;

       for (int i=0; i<26; i++){
        if (lower[i] && upper[i]) ans++;
       }

       return ans;
    }
};