class Solution {
public:
    void printInvertedSolidPyramid(int n) {
        // Implement the pattern printing logic here
        //inverted solid pyarmid ke liye space or star nikalna padegega
        //space=row-1
        //star=2*n -2*row-1
        //outter loop
        for(int row=1; row<=n; row++){
            //space
            for(int col=1; col<=(row-1); col++){
                cout<<"  ";
            }
            for(int col=1; col<=(2*n)-(2*row-1); col++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};