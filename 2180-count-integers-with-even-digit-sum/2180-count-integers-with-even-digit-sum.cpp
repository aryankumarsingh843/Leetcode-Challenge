class Solution {
    private:
        bool evendigitsum(int num){
            int n = num;
            int sum = 0;

            while (n > 0){
                sum = sum + (n%10);
                n = n/10;
            }
            return (sum%2==0);
        }
public:
    int countEven(int num) {
        int n = num;
        int count = 0;
        for (int i=2; i<=n; i++){
           if (evendigitsum(i)) count++;
        }
        return count;
    }
};