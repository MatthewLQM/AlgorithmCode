#include <iostream>
#include <string.h>
using namespace std;
bool isPrime(int n) {
	if (n == 2) return true;
	for (int i = 2; i < n; i++) {
		if (n%i == 0)return false;
	}
	return true;
}
int main(void) {
	int n, key, id[10000];
	memset(id, 0, sizeof(id));
	cin >> n;
	cin >> key; 
	id[key] = 1;
	for (int i = 1; i < n; i++) {
		cin >> key;
		if (isPrime(i + 1))id[key] = 2;
		else id[key] = 3;
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> key;
		if (id[key] == 0)printf("%04d: Are you kidding?\n", key);
		else if (id[key] == 4)printf("%04d: Checked\n", key);
		else {
			if (id[key] == 1)printf("%04d: Mystery Award\n", key);
			else if (id[key] == 2)printf("%04d: Minion\n", key);
			else if (id[key] == 3)printf("%04d: Chocolate\n", key);
			id[key] = 4;
		}
	}
	return 0;
}