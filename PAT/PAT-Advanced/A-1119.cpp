#include <iostream>
#include <string.h>
#include <vector>
#define MAX 31
using namespace std;
int preorder[MAX];
int postorder[MAX];
bool Unique = true;
vector<int> v;
void handle(int prebegin, int preend, int postbegin, int postend) {
	int nextprebegin = prebegin + 1;
	int nextpreend = nextprebegin;
	int nextpostbegin = postbegin;
	int nextpostend = postbegin;
	if (prebegin == preend){
		v.push_back(preorder[prebegin]); 
		return;
	}
	while (postorder[nextpostend] != preorder[nextprebegin])nextpostend++;
	nextpreend = nextpostend - postbegin + nextprebegin;
	if (nextpreend == preend)Unique = false;
	else handle(nextprebegin, nextpreend, nextpostbegin, nextpostend);
	v.push_back(preorder[prebegin]);
	if(nextpreend == preend)
		handle(nextprebegin, nextpreend, nextpostbegin, nextpostend);
	else {
		nextprebegin = nextpreend + 1;
		nextpostbegin = nextpostend + 1;
		handle(nextprebegin, preend, nextpostbegin, postend - 1);
	}
}
int main(void) {
	int n, key;
	cin >> n;
	memset(preorder, 0, sizeof(preorder));
	memset(postorder, 0, sizeof(postorder));
	for (int i = 0; i < n; i++) {
		cin >> preorder[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> postorder[i];
	}
	handle(0, n - 1, 0, n - 1);
	if (Unique)cout << "Yes" << endl;
	else cout << "No" << endl;
	cout << v[0];
	for (int i = 1; i < v.size(); i++) {
		cout << ' ' << v[i];
	}
	cout << endl;
	return 0;
}