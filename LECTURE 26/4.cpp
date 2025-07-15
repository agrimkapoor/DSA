#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 5;
	vector<int> v(n);//size is 0 but cap is n
    //abhi g.v in these n buckets

	v.push_back(1);// n th index pe 1 aayega
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;


	return 0;
}