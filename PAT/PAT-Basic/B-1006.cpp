#include <iostream>
using namespace std;
int main(void){
	int num;
	int count;
	cin >> num;
	count = num / 100;
	num %= 100;
	for(int i = 0; i < count; i++){
		cout << 'B';
	}
	count = num / 10;
	num %= 10;
	for(int i = 0; i < count; i++){
		cout << 'S';
	}
	for(int i = 1; i <= num; i++){
		cout << i;
	}
	return 0;
}