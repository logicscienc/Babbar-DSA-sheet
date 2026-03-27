class Solution {
public:
    void printSolidPyramid(int n) {
        // Implement the pattern printing logic here
        //solid pyramid ke liye space or star hai
        //space = n-row
        //star= 2*row-1
        //outerloop
        for(int row=1;row<=n;row++){
            //space
            for(int col=1; col<=(n-row); col++){
                cout<<"  ";
            }
            for(int col=1; col<=(2*row-1); col++ ){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};