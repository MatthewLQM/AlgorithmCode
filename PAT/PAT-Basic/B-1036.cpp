#include <iostream>
using namespace std;
int main(void){
	int a, b;
	char x;
	cin >> a >> x;
	b = a/2 + a%2;
	for(int i = 0; i < a; i++){
		cout << x;
	}
	cout << endl;
	for(int i = 0; i < b - 2; i++){
		for(int j = 0; j < a; j++){
			if(j == 0 || j == a - 1)cout << x;
			else cout << ' ';
		}
		cout << endl;
	}
	for(int i = 0; i < a; i++){
		cout << x;
	}
	cout << endl;
	return 0;
}
