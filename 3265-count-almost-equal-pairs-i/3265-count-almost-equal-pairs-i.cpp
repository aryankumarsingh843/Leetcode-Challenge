class Solution {
public:
    bool almostequal(int a, int b){
       string s = to_string(a);
       string t = to_string(b);

       while (s.size() < t.size()) 
       s = "0" + s;

       while (t.size() < s.size())
       t = "0" + t;

       if (s==t) return true;

       vector <int> v;

       for (int i=0; i<s.size(); i++){
        if (s[i] != t[i]) v.push_back(i);
       }


       if (v.size() != 2) return false;

       swap(s[v[0]], s[v[1]]);

       return s==t;
}
    int countPairs(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if (almostequal(nums[i], nums[j])) ans++;
            }
        }
        return ans;
    }
};