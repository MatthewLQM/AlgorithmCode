#include <iostream>
#include <string.h>
#include <queue>
#include <list>
using namespace std;
class custom {
public:
	int couple;
	int count;
	int represent;
};
int main(void) {
	int n, c1, c2, count = 0, flag = 1;
	custom *customers = new custom[100000];
	for (int i = 0; i < 100000; i++) {
		customers[i].couple = -1;
		customers[i].count = -1;
		customers[i].represent = -1;
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c1 >> c2;
		customers[c1].couple = c2;
		customers[c2].couple = c1;
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c1;
		customers[c1].count++;
		customers[c1].represent = 1;
		if(customers[c1].couple != -1)customers[customers[c1].couple].count++;
	}
	for (int i = 0; i < 100000; i++) {
		if (customers[i].represent == 1 && customers[i].count == 0)count++;
	}
	cout << count << endl;
	for (int i = 0; i < 100000; i++) {
		if (customers[i].represent == 1 && customers[i].count == 0) {
			if (flag == 1) {
				printf("%05d", i);
				flag = 0;
			}
			else printf(" %05d", i);
		}
	}
	cin >> count;
	return 0;
}
