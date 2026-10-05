class Solution {
public:
    int gcd(int n){
        for (int i=n/2; i>=0; i--){
            if (n%i==0) return i;
        }
        return 1;
    }
    int minSteps(int n) {
       int count=0;
       while (n>1){
        int hf = gcd(n);
        count += n/hf;
        n = hf;
       }
       return count;
    }
};