class Solution {
public:
    bool match(string word, string pattern){
        int mp1[256] = {0};
        int mp2[256] = {0};

        for (int i=0; i<word.size(); i++){
            if (mp1[word[i]] != 0 && mp1[word[i]] != pattern[i]) return false;

            if (mp2[pattern[i]] != 0 && mp2[pattern[i]] != word[i]) return false;

            mp1[word[i]] = pattern[i];
            mp2[pattern[i]] = word[i];
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector <string> ans;

        for (int i=0; i<words.size(); i++){
            if (match(words[i], pattern)) ans.push_back(words[i]);
        }

        return ans;
    }
};