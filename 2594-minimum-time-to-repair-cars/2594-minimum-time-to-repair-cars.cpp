class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
       int n = ranks.size();

       long long start = 0;
       long long minRanks = *min(ranks.begin(), ranks.end());
       long long end = 1LL * minRanks * cars * cars;

       while (start < end){
        long long mid = start + (end - start) / 2;

        long long totalCars = 0;

        for (int i=0; i<n; i++){
            totalCars += sqrt(mid / ranks[i]);
        }

        if (totalCars >= cars) end = mid;
        else start = mid + 1;
       }
       return start;
    }
};