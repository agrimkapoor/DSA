//MIRRORING OF PATTERN OF 5_a waala question
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int row=1;
    while(row<=(n+1)/2){
        if(row==1){// odd no of stars so do alag se
            int i=1;
            while(i<=n){
                cout<<"* ";
                i++;
            }
        }
        else{
            //1.stars
            for(int i=0; i<(n+1)/2-row+1;i++){
                cout<<"* ";
            }
            //2.spaces
             for(int i=0; i<2*row-3;i++){
                cout<<"  ";
            }

            //3.stars
             for(int i=0; i<(n+1)/2-row+1;i++){
                cout<<"* ";
            }
        }
        cout<<endl;
        row++;
    }

     row=(n+1)/2 -1;
    while(row>=1){
        if(row==1){// odd no of stars so do alag se
            int i=1;
            while(i<=n){
                cout<<"* ";
                i++;
            }
        }
        else{
            //1.stars
            for(int i=0; i<(n+1)/2-row+1;i++){
                cout<<"* ";
            }
            //2.spaces
             for(int i=0; i<2*row-3;i++){
                cout<<"  ";
            }

            //3.stars
             for(int i=0; i<(n+1)/2-row+1;i++){
                cout<<"* ";
            }
        }
        cout<<endl;
        row--;
    }
    return 0;
}