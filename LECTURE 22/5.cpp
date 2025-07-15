// 2d array pe dma
#include <iostream>
using namespace std;
int main() {
    int **a;
    int row,col;
    cin>>row>>col;
    a=new int*[row];
    for(int i=0;i<row;i++){
        a[i]=new int[col];
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //DELETING 2D ARRAY
    for(int i=0;i<row;i++){
        delete[]a[i];
        a[i]=NULL;
    }
    delete[]a;
    a=NULL;
    return 0;
}