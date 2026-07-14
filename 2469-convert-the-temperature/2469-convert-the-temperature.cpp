class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double C = celsius + 273.15;
        double F = ((celsius * 1.80)  + 32.00);
        return {C,F};
    }
};