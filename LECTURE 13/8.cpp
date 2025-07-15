//TO CHECK IF STRING IS PALINDROME
#include <iostream>
using namespace std;

int length(char *a) {
	int i;
	for (i = 0; a[i] != '\0' ; ++i) ;

	return i;
}

bool isPalindrome(char*a) {
	int len = length(a);

	int i = 0, j = len - 1;
	while (i < j) {
		if (a[i] != a[j]) {
			return false;
		}

		i++;
		j--;
	}
	return true;
}

int main() {

	char a[1000] = "abcda";
	if (isPalindrome(a)) {
		cout << "Palindrome\n";
	}
	else {
		cout << "Not a Palindrome\n";
	}

	return 0;
}