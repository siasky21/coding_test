#include <iostream>

using namespace std;

int N;

struct node
{
	char left;
	char right;
};
struct node arr[27];

void preorder(char root)
{
	if (root == '.')
	{
		return;
	}
	cout << root;
	preorder(arr[root].left);
	preorder(arr[root].right);
}

void inorder(char root)
{
	if (root == '.')
	{
		return;
	}
	
	inorder(arr[root].left);
	cout << root;
	inorder(arr[root].right);
}

void postorder(char root)
{
	if (root == '.')
	{
		return;
	}
	postorder(arr[root].left);
	postorder(arr[root].right);
	cout << root;
}

int main()
{
	cin >> N;

	char parent, left, right;

	for (int i = 0; i < N; i++)
	{
		cin >> parent >> left >> right;

		arr[parent].left = left;
		arr[parent].right = right;
	}

	preorder('A');
	cout << "\n";
	inorder('A');
	cout << "\n";
	postorder('A');
	cout << "\n";

	return 0;
}