#include <iostream>
#include <string.h>
#include <queue>
#include <list>
using namespace std;
int countID(int n) {
	int result = 0;
	while (n != 0) {
		result += n % 10;
		n /= 10;
	}
	return result;
}
int main(void) {
	int n, num, k = 0, count = 0;
	int result[40];
	memset(result, 0, sizeof(result));
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		num = countID(num);
		result[num] = 1;
	}
	for (int i = 0; i < 40; i++) {
		if (result[i] == 1) {
			count++;
		}
	}
	cout << count << endl;
	while (result[k] == 0) {
		k++;
	}
	cout << k;
	k++;
	while (k < 40) {
		if (result[k] != 0)cout << ' ' << k;
		k++;
	}
	return 0;
}
