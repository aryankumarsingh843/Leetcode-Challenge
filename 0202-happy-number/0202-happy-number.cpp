class Solution {
public:
    int issum(int n){
        int sum = 0;
        while (n){
            int rem = n%10;
            sum += rem*rem;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
      unordered_set <int> set;
      while (true){
      if (n==1) return true;
       n = issum(n);
       if (set.count(n) == 1) return false;
       set.insert(n);
       }
    } 
};