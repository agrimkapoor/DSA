// READING A STRING
#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch; // Because while loop ke andar jaane se pehle we are comparing
	// ch bucket with '$', garbage se toh kar nhi skte..
	// Thus, we took input of ch bucket outside the loop once..
	while (ch != '$') {
		cout << ch;

		cin >> ch;
	}

	//M2 :
	char ch2='0';//dont keep garbage
	while(ch2!='$'){
		cin>>ch2;
		cout<<ch2;
	}
	//if i/p is :agrim kapoor$
	//o/p is :agrimkapoor //dont say only agrim as we are reading a charac and cin will ignore blankspace charac



	return 0;
}
