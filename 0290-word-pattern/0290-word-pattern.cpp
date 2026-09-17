class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
       stringstream ss(s);

       vector <string> word;

       string ans;

       while (ss >> ans){
        word.push_back(ans);
       }
       
       if (pattern.size() != word.size()) return false;
       
       for (int i=0; i<pattern.size(); i++){
        for (int j=0; j<pattern.size(); j++){
            if (pattern[i] == pattern[j] && word[i] != word[j])  return false;

            if (pattern[i] != pattern[j] && word[i] == word[j])  return false;
        }
       }

       return true;
    }
};