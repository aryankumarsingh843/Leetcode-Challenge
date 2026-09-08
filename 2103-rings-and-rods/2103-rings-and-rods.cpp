class Solution {
public:
    int countPoints(string rings) {
     int arr[10][3] = {};

     for (int i=0; i<rings.size(); i+=2){
        int colour = rings[i];
        int rod = rings[i+1]-'0';

        if (colour == 'R'){
            arr[rod][0] = 1;
        }
        else if (colour == 'G'){
            arr[rod][1] = 1;
        }
        else {
            arr[rod][2] = 1;
        }
     }

     int ans = 0;

     for (int i=0; i<10; i++){
        if (arr[i][0] && arr[i][1] && arr[i][2]) ans++;
     }

     return ans;
    }
};