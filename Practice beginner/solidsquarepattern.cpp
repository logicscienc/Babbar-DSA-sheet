class Solution {
public:
    void printSquare(int n) {
        // User to fill this part
        for(int i=0; i<n;i++ ){
            for (int j=0; j<n; j++){
                cout<<"*";
            }
            // yaha par mai galti ki hu endl nhi use kiye the agar  endl nhi use kare ge to ek hi line mai print ho jaye ga
            cout<<endl;
        }
    }
};