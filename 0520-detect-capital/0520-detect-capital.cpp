class Solution {
public:
    bool detectCapitalUse(string word) {
      string upper =  word;
      string lower = word;
      string capital = word;

    for (int i=0;  i<word.size();  i++){
        upper[i] = toupper(word[i]);
        lower[i] = tolower(word[i]);
    }
      capital[0] = toupper(capital[0]);

      for (int i=1; i<capital.size(); i++){
        capital[i] = tolower(capital[i]);
      }


     if (word == upper || word == lower || word == capital) return true;
     else return false;
    }
};