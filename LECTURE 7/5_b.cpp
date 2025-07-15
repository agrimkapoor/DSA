// macros in loop
#include <iostream>
using namespace std;
#define printkar(n) for(int i=0;i<n;i++){ cout<<i<<" ";}cout<<endl;
// yeh ek line me hi likhna macro

// agar multiple line me likhna ho toh
#define FOR(n)  for(int i=0;i<n;i++) \
    {\
    cout<<i<<" ";\
    }\
    cout<<endl;\
// AFTER EACH LINE PRESS(\)
int main() {
    printkar(10);
    FOR(10);
    return 0;
}