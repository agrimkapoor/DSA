//VECTOR IN FUNCTIONS
#include <iostream>
#include<vector>
using namespace std;
void print(vector<int>v){//CALL BY VALUE
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void update(vector<int>v){//call by val
 for(int i=0;i<v.size();i++){
       v[i]+=100;
    }
}
void update2(vector<int>&v){//call by ref
 for(int i=0;i<v.size();i++){
       v[i]+=100;
    }
}
int main() {
    vector<int>v;
    //INPUT
    for(int i=1;i<=5;i++){
        v.push_back(i);
    }
    update(v);
    print(v);
    update2(v);
    print(v);

    return 0;
}