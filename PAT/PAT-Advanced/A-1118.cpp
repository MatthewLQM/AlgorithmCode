#include <iostream>
#define MAX 10001
using namespace std;
int father[MAX];
void init() {
	for (int i = 0; i < MAX; i++) {
		father[i] = i;
	}
}
int findFather(int a) {
	int x = father[a];
	while (x != father[x]) {
		x = father[x];
	}
	return x;
}
void Union(int a, int b) {
	int faA = findFather(a);
	int faB = findFather(b);
	if (faA != faB) {
		father[faA] = faB;
	}
}
int main(void) {
	int n, m, tmp1, tmp2, max = 0, rootNum = 0;
	init();
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m >> tmp1;
		if (tmp1 > max)max = tmp1;
		for (int j = 1; j < m; j++) {
			cin >> tmp2;
			if (tmp2 > max)max = tmp2;
			Union(tmp1, tmp2);
		}
	}
	for (int i = 1; i <= max; i++) {
		if (father[i] == i)rootNum++;
	}
	cout << rootNum << ' ' << max << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp1 >> tmp2;
		if (findFather(tmp1) == findFather(tmp2))cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}