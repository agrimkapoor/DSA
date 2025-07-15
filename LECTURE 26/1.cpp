//VECTORS
#include <iostream>
#include<vector>
using namespace std;
int main() {
    //   vector<int>v={3,2,1,0,5,6,4,5,3};
    // this is also how u can initialise
    vector<int> v;
    //initially size and cap is 0
    //INPUT
    for(int i=1;i<=5;i++){
        v.push_back(i);
        //cant use cin>>v[i] here
        cout << "After insert " << i << " Size: " << v.size()
		     << ", Capacity: " << v.capacity() << endl;

    }
   
    
    //PRINT 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}