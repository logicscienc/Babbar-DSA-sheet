class Solution {
public:
    void printSolidDiamond(int n) {
        // Implement the pattern printing logic here
        //logic based on solid pyarmid
        //spaceand star 
        //outer loop
        for(int row=1; row<=n; row++){
            //half traingle space
            for(int col=1; col<=n-row; col++){
                cout<<" ";
            }
            //star
            for(int col=1; col<=2*row-1; col++){
                cout<<"*";
            }
           cout<<endl;   
        }
        n--;
        // inverse
        for(int row=1; row<=n; row++){
            //space
            for(int col=1; col<=row; col++){
                cout<<" ";
            }
            //star
            for(int col=1; col<=2*n-2*row+1; col++){
                cout<<"*";
            }
           cout<<endl;   
        }
      }
};