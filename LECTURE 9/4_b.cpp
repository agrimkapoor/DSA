// can also do by using for loop
#include <iostream>
using namespace std;

int main() {
	int characters = 0, whitespaces = 0, special = 0, digits = 0;

	char ch;
	// ch = cin.get();
for(ch = cin.get();ch != '$';ch = cin.get()){
	
		
		if ((ch >= 'a' && ch <= 'z' )|| (ch >= 'A' && ch <= 'Z')) {
          
			characters++;
		}
		else if (ch >= '0' and ch <= '9') {
            
			digits++;
		}
		else if (ch == ' ' || ch == '\t' || ch == '\n') {
			whitespaces++;
         
		}
		else {
			special++;
		}

		// ch = cin.get();
}


	cout << "Characters    : " << characters << endl;
	cout << "Digits        : " << digits << endl;
	cout << "White Spaces  : " << whitespaces << endl;
	cout << "Special       : " << special << endl;




	return 0;
}















