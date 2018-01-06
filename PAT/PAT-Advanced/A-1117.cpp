#include <iostream>
#include <string.h>
using namespace std;
int comp(const void * a, const void * b) {
	return *(int *)b - *(int *)a;
}
int main(void) {
	int n, *a, k = 0;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	qsort(a, n, sizeof(int), comp);
	while (a[k] > k + 1)k++;
	cout << k << endl;
	return 0;
}