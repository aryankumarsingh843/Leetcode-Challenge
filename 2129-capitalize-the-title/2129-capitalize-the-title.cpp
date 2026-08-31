class Solution {
public:
    string capitalizeTitle(string title) {
        string ans = "";
        stringstream ss(title);
        string word;


        while (ss >> word){
            if (word.size() <= 2){
                for (int i=0; i<word.size(); i++){
                    word[i] = tolower(word[i]);
                }
            }
            else {
                word[0] = toupper(word[0]);

                for (int i=1; i<word.size(); i++){
                    word[i] = tolower(word[i]);
                }
            }

            ans += word + " ";

        }
         ans.pop_back();

         return ans;
    }
};