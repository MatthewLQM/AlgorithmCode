#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(void){
	int a, b, d;
	int c;
	int i;
	int out[1000];
	cin >> a >> b >> d;
	c = a + b;
	if(c == 0){
		cout << '0' << endl;
		return 0;
	}
	for(i = 0; c != 0; i++){
		out[i] = c % d;
		c /= d;
	}
	for(i = i - 1; i >= 0; i--){
		cout << out[i];
	}
	return 0;
}
