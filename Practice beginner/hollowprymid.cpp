class Solution {
public:
    void printHollowPyramid(int n) {
        // Implement the pattern printing logic here
        //logic each row is made up
        //space
        //star
        for(int row=1; row<=n; row++){
            //space
            for(int col=1; col<=n-row; col++){
                cout<<"  ";

            }
            if(row==1){
                cout<<"* ";
            }
            else if( row==n){
                for(int col=1;col<=2*n-1; col++){
                    cout<<"* ";
                }
            }
            else{
                //middlerow
                //step 1 print*
                cout<<"* ";
                for(int col=1;col<=2*row-3;col++){
                    cout<<"  ";
                }
                cout<<"* ";
            }
               cout<<endl;
    
            }
          
    
        }
        
    };
