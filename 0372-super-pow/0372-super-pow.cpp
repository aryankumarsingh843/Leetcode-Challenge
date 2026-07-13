class Solution {
    private: 
    int modpower(int base, int power){
        base = base%1337;
        int ans = 1;
        for (int i=1; i<=power; i++){
            ans = (ans * base)%1337;
        }
        return ans;
    }
public:
    int superPow(int a, vector<int>& b) {
      int ans = 1;
      for (int i=0; i<b.size(); i++){
        ans = ((modpower(ans, 10)) * (modpower(a, b[i])))%1337;
      }
      return ans;
    }
};