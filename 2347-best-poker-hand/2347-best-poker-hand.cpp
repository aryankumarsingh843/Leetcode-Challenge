class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
       bool flag = true;

       for (int i=1; i<5; i++) {
        if (suits[i] != suits[0]){
            flag = false;
            break;
        }
       }

       if (flag){
        return "Flush";
       }

       int freq[14] = {0};

       for (int i=0; i<5; i++){
        freq[ranks[i]]++;
       }

       for (int i=1; i<=13; i++){
        if (freq[i] >= 3){
            return "Three of a Kind";
        }
       }

       for (int i=1; i<=13; i++){
        if (freq[i] >= 2){
            return "Pair";
        }
       }

       return "High Card";
    }
};