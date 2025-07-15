#include <iostream>
using namespace std;
int main() {
    char ch;
    int cnt=0;
    while(ch!='\n'){// infinite loop 
    // as cin ignore whitespace characters
        cnt++;
        cin>>ch;
    }
    cout<<cnt;
    return 0;
}