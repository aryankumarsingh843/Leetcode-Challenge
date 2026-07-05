class Solution {
public:
    int hammingDistance(int x, int y) {
        int val = x^y;
        int count = 0;
        for (int i=0; i<32; i++){
            if (((val>>i)&1)==1) count++;
        }
        return count;
    }
};