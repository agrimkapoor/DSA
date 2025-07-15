//TOWER OF HANOI
#include <iostream>
using namespace std;
// return type of fn is void as we have to print
void toh(int n,char src,char dest,char helper){
    //1.base case
    if(n==0)return ;
    //2.recursive case
    toh(n-1,src,dest,helper);
    cout<<"MOVE "<<n<<" DISC FROM"<<src<<" to "<<dest<<endl;
    toh(n-1,helper,src,dest);
}
int main() {
    int n;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}