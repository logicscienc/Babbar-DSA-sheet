class Solution {
public:
    void printInvertedRightAngleTriangle(int n) {
        // Implement the pattern printing logic here
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};