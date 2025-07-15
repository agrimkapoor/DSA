// 2d vectors : vector of vectors
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    vector<vector<int>>a(4,vector<int>(5,1));
    int rows=4,cols=5;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            // a[i].push_back(j); WRONG AS PEHLE SE HI J COL HAI
            a[i][j]=j;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // number of rows :a.size();
    // number of col can be diff in diff rows
    // number of col=a[0].size();
    // 0 th row waale 1d array ka size :a[0].size();
    //a[1].pb   ,a[1].pb first row me do  col aagayi

    return 0;
}