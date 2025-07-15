//reverse a number
#include <iostream>
using namespace std;
int main() {
    int n;
    int rev=0;
   
    for( cin>>n;n>0;n/=10){ //m2 is  for( ;n>0;n/=10){
        rev=rev*10+n%10;
    }
    cout<<rev;
    return 0;
}
//REVERSE A NUMBER
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int rev=0;

//     while(n!=0){
//         rev=rev*10+ n%10;
//         n/=10;
//     }
//     cout<<rev;

//     return 0;
// }