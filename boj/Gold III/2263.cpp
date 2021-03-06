#include <iostream>
#define MAX 100001

using namespace std;

int n;
int inorder[MAX], postorder[MAX];
int idx[MAX];

void preorder(int inbegin, int inend, int postbegin, int postend)
{
	if (inbegin > inend || postbegin > postend)
	{
		return;
	}

	int root = postorder[postend];
	cout << root << " ";
	preorder(inbegin, idx[root] - 1, postbegin, postbegin + (idx[root] - inbegin) - 1);
	preorder(idx[root] + 1, inend, postbegin + (idx[root] - inbegin), postend - 1);
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> inorder[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> postorder[i];
	}

	for (int i = 0; i < n; i++)
	{
		idx[inorder[i]] = i;
	}

	preorder(0, n - 1, 0, n - 1);
	return 0;
}