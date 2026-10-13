class Solution {
public:
    long long minMoves(vector<int>& balance) {
    int n = balance.size();

    long long sum = 0;

    for (int i=0; i<n; i++){
        sum += balance[i];
    }

    if (sum < 0) return -1;

    int idx = -1;
    for (int i=0; i<n; i++){
        if (balance[i] < 0){
            idx = i;
            break;
        }
    }

    if (idx == -1) return 0;

    int need = -(balance[idx]);
    long long ans = 0;

    for (int j=1; j<n && need > 0; j++){
        int left = (idx-j+n)%n;
        int right = (idx+j)%n;

        int takeleft = min(balance[left], need);
        need -= takeleft;
        ans += 1LL * takeleft * j;

        if (need == 0) break;

        int takeright = min(balance[right], need);
        need -= takeright;
        ans += 1LL * takeright * j;
    }

    return ans;
    }
};