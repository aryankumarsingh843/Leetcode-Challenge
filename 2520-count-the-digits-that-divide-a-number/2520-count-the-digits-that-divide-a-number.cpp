class Solution {
public:
   int countDigits(int num) {
    int div = num;
    int rem = 0;
    int count = 0;
    while (num > 0){
        rem = num%10;
        num/=10;
    if (div%rem==0) count++;
    }
    return count;
   }
};