//CHECK PRIME
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// loop run krna hai from [2,n-1]
	int i = 2;
	while (i <= n - 1) {
		if (n % i == 0) {
			cout << "Not prime";
			return 0;// end the program no need to check further
        //    break;  //break nhi  likhna  but return 
        //break se sirf innermost loop se bahar ho jayega
        }

		i = i + 1;
	}

	// Means loop ke andar kisi bhi i se n divide nahi hua, else
	// program upr hi end kr jaata
	cout << "Prime";

	return 0;
}