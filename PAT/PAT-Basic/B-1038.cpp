#include <iostream>
using namespace std;
int main(void){
	int a[101] = {0};
	int n, g;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> g;
		a[g]++;
	}
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> g;
		cout << a[g];
		if(i != n - 1)cout << ' ';
	}
	return 0;
}
