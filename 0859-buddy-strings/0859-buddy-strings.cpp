class Solution {
public:
    bool buddyStrings(string s, string goal) {
       if (s.size() != goal.size()) return false;

       if (s==goal){
        int freq[16] = {0};

        for (int i=0; i<s.size(); i++){
            freq[s[i]-'a']++;

            if (freq[s[i]-'a'] >= 2) return true;
        }
        return false;
       }

       int count = 0;
       int first = -1;
       int second = -1;

       for (int i=0; i<s.size(); i++){
        if (s[i] != goal[i]){
            count++;
            if (first == -1) first = i;
            else second = i;
        }
       }

       if (count != 2) return false;
       return s[first]==goal[second] && s[second]==goal[first];
    }
};