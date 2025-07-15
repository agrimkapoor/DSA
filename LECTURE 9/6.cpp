#include <iostream>
using namespace std;
int main() {
    char ch;
    int count=0;
   ch=cin.get();
    while(ch!='$'){// multiple characters i/p lene ke liye loop lagega
        count++;
       ch=cin.get();
    }
    cout<<count;
    return 0;
}
// terminal me i/p :h e l l o
//                  $
//o/p is 10( also counted \n)