//max xor pair
#include <iostream>
using namespace std;

class node {
public:
	int no;
	node* left, *right;
	node(int x): no(x) {
		left = right = NULL;
	}
};


void insertInteger(node* root, int n) {
	for (int i = 30; i >= 0; --i)
	{
		if ((n & (1 << i)) == 0) {
			if (root->left == NULL) root->left = new node(0);
			root = root->left;
		}
		else {
			if (root->right == NULL) root->right = new node(1);
			root = root->right;
		}
	}
	root->no = n;
}

int findMaxXor(node* root, int no) {
	int ans;
	for (int i = 30; i >= 0; --i)
	{
		int bit = no & (1 << i);
		if (bit) {
			if (root->left) root = root->left;
			else root = root->right;
		}
		else {
			if (root->right) root = root->right;
			else root = root->left;
		}
	}
	return no ^ (root->no);
}


int main() {

	int a[] = {3, 5, 2, 1, 4};
	int n = sizeof(a) / sizeof(int);

	node* root = new node(-1);
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		insertInteger(root, a[i]);
		int x = findMaxXor(root, a[i]);
		ans = max(ans, x);
	}
	cout << ans << endl;



	/*
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				ans = max(a[i] ^ a[j], ans);
			}
		}
		cout << ans << endl;
	*/


	return 0;
}