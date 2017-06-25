#include <iostream>
#include <cmath>
using namespace std;
int main(void){
	int d[10001] = {0};
	int a, b, c, n;
	cin >> n;
	for(int i = 0; i < n; i++){
		scanf("%d-%d %d", &a, &b, &c);
		d[a] += c;
	}
	n = 0;
	for(int i = 1; i < 10001; i++){
		if(d[i] > d[n])n = i;
	}
	cout << n << ' ' << d[n] << endl;
	return 0; 
}