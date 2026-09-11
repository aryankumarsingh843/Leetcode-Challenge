class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0;
        int freqsecret[10] = {0};
        int freqguess[10] = {0};

        for (int i=0; i<secret.size(); i++){
            if (secret[i] == guess[i]) bull++;
            else {
                freqsecret[secret[i]-'0']++;
                freqguess[guess[i]-'0']++;
            }
        }

        int cow = 0;

        for (int i=0; i<10; i++){
            cow += min(freqsecret[i], freqguess[i]);
        }

        return to_string(bull)+'A' + to_string(cow)+'B';
    }
};