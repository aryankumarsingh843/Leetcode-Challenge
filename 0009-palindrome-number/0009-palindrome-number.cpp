class Solution {
public:
    bool isPalindrome(int x) {
    int original = x;
    long long last = 0;
    long long reverse = 0;
  if (x < 0) return false;
    while (x!=0){
        reverse = reverse * 10;
        last = x%10;
        reverse += last;
        x/=10;
    }
     if (reverse == original) return true;
     else return false;
    }
};