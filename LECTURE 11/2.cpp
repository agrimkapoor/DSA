//SWITCH CASE
#include <iostream>
using namespace std;
int main() {
    char ch='e';
    switch (ch){
        case 'n':
        case 'N':
        cout<<"NORTH\n";
        break;
        case 'e':
        case 'E':
        cout<<"EAST\n";
        break;
        case 's':
        case 'S':
        cout<<"SOUTH\n";
        break;
        case 'w':
        case 'W':
        cout<<"WEST\n";
        break;
        default:
        cout<<"invalid character\n";


    }
    return 0;
}  