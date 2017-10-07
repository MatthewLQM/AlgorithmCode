#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX 100000
int main(void){
	int a[MAX] = {0};
	int n;
	int s, g, max = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s >> g;
		a[s] += g;
	}
	n = 0;
	max = a[n];
	for(int i = 1; i < MAX; i++){
		if(a[i] > max){
			n = i;
			max = a[n];
		}
	}
	cout << n << ' ' << max << endl;
	return 0;
}
