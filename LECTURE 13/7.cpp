//LENGTH OF CHARACTER ARRAY(STRING)
#include <iostream>
using namespace std;
int length(char*a){
    int i;
    for(i=0 ;a[i]!='\0';i++)
    return i;
}
int main() {
    char a[100000];
	cin.getline(a, 100000);
    //'\0' and '\n' inn sabko length of string mei count nhi karenge
	cout << "String: " << a << endl; 
	cout << "Length: " << length(a) << endl;
    return 0;
}