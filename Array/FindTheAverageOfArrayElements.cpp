#include<vector>
using namespace std;
class Solution {
public:
    double findAverage(const vector<int>& arr) {
        // Implement logic to find the average
        int n = arr.size();

        int sum = 0;
        for(int i = 0; i<n; i++)
        {
            sum = sum + arr[i];
        }

        return (double)sum/n;
    }
};