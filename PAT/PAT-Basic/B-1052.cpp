#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void){
	int n, begin = 0;
	int a[5];
	int flag = 0;
	string tmp;
	vector<string> v[3];
	char x;
	while((x = getchar()) != '\n' || flag != 2){
		if(x == '\n'){
			flag++;
			continue;
		}
		else if(x == '[' && begin == 0){
			tmp = "";
			begin = 1;
		}
		else if(x == ']' && begin == 1){
			v[flag].push_back(tmp);
			begin = 0;
		}
		else if(begin == 1){
			tmp += x;
		}
	} 
	cin >> n;
	for(int i = 0, k; i < n; i++){
		cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
		if(a[0] > v[0].size() || a[1] > v[1].size() || a[2] > v[2].size() ||
			a[3] > v[1].size() || a[4] > v[0].size()){
			cout << "Are you kidding me? @\\/@" << endl;
		}
		else if(a[0] <= 0 || a[1] <= 0 || a[2] <= 0 ||
			a[3] <= 0 || a[4] <= 0){
			cout << "Are you kidding me? @\\/@" << endl;
		}
		else{
			cout << v[0][a[0] - 1] << '(' << v[1][a[1] - 1]	
				<< v[2][a[2] - 1] << v[1][a[3] - 1]
				<< ')' << v[0][a[4] - 1] << endl;
		}
	}
	return 0;
}
