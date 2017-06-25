#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void){
	int n, flag;
	char x;
	int a[3] = {0};
	cin >> n;
	getchar();
	for(int i = 0; i < n; i++){
		flag = 0;
		a[0] = a[1] = a[2] = 0;
		while((x = getchar())!='\n'){
			if(x != 'P' && x != 'A' && x != 'T'){
				flag = -1;
			}
			else if(x == 'A' && flag != -1){
				a[flag]++;			
			}
			else if(x == 'P' && flag == 0){
				flag++;
			}
			else if(x == 'T' && flag == 1){
				flag++;
			}
			else {
				flag = -1;
			}
		}
		if(flag == 2 && a[0] * a[1] == a[2] && a[1] != 0)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
