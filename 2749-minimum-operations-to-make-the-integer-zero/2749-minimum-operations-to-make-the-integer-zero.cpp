class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for (int k=1; k<=60; k++){
            long long x = num1 - 1LL * k * num2;

            if (x<=0) continue;

            long temp = x;
            long bits = 0;

            while (temp > 0){
                if (temp%2==1) bits++;
                temp /= 2;
            }

            if (bits <= k && k<=x) return k;
        }
        return -1;
    }
};