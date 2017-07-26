#include <iostream>
#include <cmath>
using namespace std;
int fri(int a){
	int b = 0;
	for(int i = 0; i < 4; i++){
		b += a % 10;
		a /= 10;
	}
	return b;
}
int main(void){
	int n, count = 0, flag = 0;
	int c[40] = {0};
	int a, b, max = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		b = fri(a);
		c[b] = 1;
	}
	for(int i = 0; i < 40; i++){
		if(c[i] == 1)count++;
	}
	cout << count << endl;
	for(int i = 0; i < 40; i++){
		if(c[i] == 1){
			if(flag == 0){
				flag = 1;
				cout << i;
			}
			else cout << ' ' << i;
		}
	}
	cout << endl;
	return 0;
}
