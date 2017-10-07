#include <iostream>
using namespace std;
int main(void){
	char op;
	int count, line = 1;
	cin >> count >> op;
	if(count == 1){
		cout << op << endl;
		cout << '0' << endl;
		return 0;
	}
	count--;
	for(int i = 3;count >= 2 * i; i = i + 2){
		count -= 2 * i;
		line += 2;
	}
	for(int i = 0; i <= line/2; i++){
		for(int j = 0; j < i; j++){
			cout << ' ';
		}
		for(int j = 0; j < line - 2 * i; j++){
			cout << op;
		}
		cout << endl;
	}
	for(int i = line/2 - 1; i >= 0; i--){
		for(int j = 0; j < i; j++){
			cout << ' ';
		}
		for(int j = 0; j < line - 2 * i; j++){
			cout << op;
		}
		cout << endl;
	}
	cout << count << endl;
	return 0; 
}
