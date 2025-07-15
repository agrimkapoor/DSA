/*
    1
   232
  34543
 4567654
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
            //1.spaces (N-ROW SPACES)
                for(int i=1;i<=n-row;i++){
                    cout<<" ";
                }
            //2.increasing numbers(ROW TIMES INCREASING NUMBERS STARTING FROM ROW)
                int no=row;
                for(int i=1;i<=row;i++){
                    cout<<no;
                    no++;
                }
            //3.decreasing numbers(ROW -1 TIMES)
                no=no-2; // or no=2*row-2
                for(int i=1;i<=row-1;i++){
                    cout<<no;
                    no--;
                }


            //4.new line
                cout<<endl;
        row++;
    }
    return 0;
}