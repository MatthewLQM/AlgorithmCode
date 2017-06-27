#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;
int main(void){
	int n, m, count = 0;
	double tmp;
	double coe[1001] = {0};
    cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		cin >> tmp;
		coe[m] += tmp;
	}
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		cin >> tmp;
		coe[m] += tmp;
	}
	for(int i = 0; i < 1001; i++){
		if(coe[i] != 0)count++;
	}
	cout << count;
	for(int i = 1001; i > 0; i--){
		if(coe[i - 1] != 0)
            printf(" %d %.1f", i - 1, coe[i - 1]);
	}
	cout << endl;
	return 0;
}
