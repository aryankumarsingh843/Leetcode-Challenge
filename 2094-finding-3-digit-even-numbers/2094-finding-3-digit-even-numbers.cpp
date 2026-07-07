class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
    /*  int n = digits.size();
      unordered_set<int> st;
      for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            for (int k=0; k<n; k++){
              if (i==j || i==k || j==k) continue;
            int num = digits[i]*100 + digits[j]*10+digits[k]*1;

            if (num%2==0 && num >=100) st.insert(num);
        }
      }
      }
      vector <int> result(begin(st), end(st));
      sort (begin(result), end(result));
      return result; */

      vector <int> v;
      vector <int> mp(10, 0);

      for (int i=0; i<digits.size(); i++){
        mp[digits[i]]++;
      }

      for (int i=1; i<=9; i++){
        if (mp[i] == 0) continue;
        mp[i]--;
        for (int j=0; j<=9; j++){
        if (mp[j] == 0) continue;
        mp[j]--;
            for (int k=0; k<=8; k+=2){
            if (mp[k] == 0) continue;
            mp[k]--;  
            int num = i*100 +j*10 +k;
            v.push_back(num);
            mp[k]++;
            }
            mp[j]++;
        }
        mp[i]++;
      }
      return v;
    }
};