class Solution {
    private:
    bool ishelper(int num){
        int div = num;
        while (num > 0){
        int rem = num%10;
        num/=10;
        if (rem == 0 || div%rem!=0) return false;
        }
        return true;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> ans;
        for (int i=left; i<=right; i++){
            if (ishelper(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};