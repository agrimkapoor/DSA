// IMPLEMENTATION OF VECTOR
#include <iostream>
using namespace std;

template<typename T>
class Vector {
public:
	T *arr;
	int ms;
	int cs;

	Vector(int s = 1) {
		cs = 0;
		ms = s;
		arr = new T[ms];
	}

	void push_back(T d) {
		if (cs == ms) {
			T *oldarr = arr;
			int oldms = ms;
			arr = new T[2 * ms];
			ms *= 2;
			for (int i = 0; i < oldms; ++i)
			{
				arr[i] = oldarr[i];
			}
			delete []oldarr;
		}

		arr[cs++] = d;
	}

	void pop_back() {
		if (cs > 0) cs--;
	}

	int size() {
		return cs;
	}

	int capacity() {
		return ms;
	}

	T operator[](int indx) {
		return arr[indx];
	}
};

int main() {

	Vector<char> v;

	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(i + 'a' - 1);
		cout << "After insert " << i << " Size: " << v.size()
		     << ", Capacity: " << v.capacity() << endl;

	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}