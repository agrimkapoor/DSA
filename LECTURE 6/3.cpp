//PASCAL TRIANGLE BEST WAY
/*
1       THIS IS 0C0 SO WE SAY THIS IS ROW 0
1 1
1 2 1
1 3 3 1
1 4 6 4 1  THIS IS ROW N-1
*/
#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    for(int row=0;row<=N-1;row++){
        //1.PRINT 1
            cout<<1<<" ";//GIVE GAP
        //2.PRINT ROW TIMES NUMBER  (for row=0 ->0 times work)
            int pt=1;
            int ct;
            for(int j=1;j<=row;j++){
                ct=pt*(row-j+1)/j;//THIS IS ALWAYS INTEGER SO NO NEED TO TYPECAST
                // nCr -> row C j
                cout<<ct<<" ";
                pt=ct;
            }
        //3.PRINT \n
        cout<<endl;
        

    }
    return 0;
}