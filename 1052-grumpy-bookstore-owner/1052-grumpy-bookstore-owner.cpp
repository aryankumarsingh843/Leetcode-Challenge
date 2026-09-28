class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k = minutes;

        vector <int>& arr = customers;
        vector <int>& brr = grumpy;

        int n = arr.size();

        int prevsum = 0;

        for (int i=0; i<k; i++){
            if (brr[i] == 1) prevsum += arr[i];
        }

        int maxsum = prevsum;
        int maxidx = 0;
        int i=1;
        int j=k;

        while (j<n){
            int currsum = prevsum;

            if (brr[j] == 1) currsum += arr[j];

            if (brr[i-1] == 1) currsum -= arr[i-1];

            if (maxsum < currsum){
                maxsum = currsum;
                maxidx = i;
            }

            prevsum = currsum;
            i++;
            j++;
        }

        for (int i=maxidx; i<maxidx+k; i++){
            brr[i] = 0;
        }

        int sum = 0;

        for (int i=0; i<n; i++){
            if (brr[i] == 0) sum += arr[i];
        }

        return sum;
    }
};