#include <iostream>
using namespace std;

int main(void){
	int n, m, tmp, ta;
	cin >> n >> m;
	int a[m], g[m];
	for(int i = 0; i < m; i++){
		cin >> g[i];
	}
	for(int i = 0; i < m; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		tmp = 0;
		for(int j = 0; j < m; j++){
			cin >> ta;
			if(ta == a[j])tmp += g[j];
		}
		cout << tmp << endl;
	}
	return 0;
}
