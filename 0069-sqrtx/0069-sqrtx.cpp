class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;

        while (start <= end){
            int mid = start + (end - start) / 2;
            
            long long m = (long long) mid;
            long long y = (long long) x;
            if ((m*m)==y){
                return mid;
            }
            else if ((m*m) > y) end = mid - 1;
            else start = mid + 1;
        }
        return end;
    }
};