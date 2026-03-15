#include<vector>
using namespace std;
class Solution {
public:
    int findFirstUnsortedIndex(const vector<int>& arr) {
        // Implement logic to find first unsorted index

        int i = 0;
        int j = i+1;

        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return i;
            }
        }
        return -1; // Array is sorted
    }
};