#include <iostream>
#include <cmath>
using namespace std;
int main(void){
	int n, count = 0, flag = 0;
	int c[40] = {0};
	int a, b, max = 0;
	int g[100000], re[100000] = {0};
	for(int i = 0; i < 100000; i++){
		g[i] = -1;
	}
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b; 
		g[a] = b;
		g[b] = a;
	}
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		re[a]++;
		if(g[a] != -1)re[g[a]] += 2;
	}
	for(int i = 0; i < 100000; i++){
		if(re[i] == 1) count++;
	}
	cout << count << endl;
	if(count == 0)return 0;
	for(int i = 0; i < 100000; i++){
		if(re[i] == 1) {
			if(flag == 0){
				flag++;
				printf("%05d", i);
			}
			else printf(" %05d", i);
		}
	}
	cout << endl;
	return 0;
}
