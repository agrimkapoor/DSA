//SET
#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int>s;
    s.insert(1);
    s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(4);
	s.insert(22);
	s.insert(3);

    while(!s.empty()){
        auto address=s.begin();
        s.erase(s.begin());
        cout<<*address;
    }

    return 0;
}