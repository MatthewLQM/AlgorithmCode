#include<iostream>
using namespace std;
int main() {
	double max[3], input, temp, result = 0.65;
	int num;
	for (int i = 0; i < 3; i++) {
		cin >> temp;
		num = 0;
		for (int j = 0; j < 2; j++) {
			cin >> input;
			if (input > temp) {
				temp = input; num = j + 1;
			}
		}
		if (num == 0) cout << "W ";
		else if (num == 1) cout << "T ";
		else cout << "L ";
		result *= temp;
	}
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << (result - 1) * 2 << endl;
	cin >> temp;
	return 0;
}