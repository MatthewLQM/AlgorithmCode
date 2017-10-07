#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool is_na(int n){
	if(n == 2)return true;
	double tmp = sqrt(n) + 1;
	for(int i = 2; i < tmp; i++){
		if(n % i == 0)return false;
	}
	return true;
}
int main(void){
 	int n, j, m, id;
 	string re[10000] = "";
 	cin >> n;
 	for(int i = 0; i < n; i++){
 		cin >> id;
 		if(i == 0)re[id] = "Mystery Award";
 		else if(is_na(i + 1))re[id] = "Minion";
 		else re[id] = "Chocolate";
 	}
 	cin >> m;
 	for(int i = 0; i < m; i++){
 		cin >> id;
 		if(re[id] == "")printf("%04d: Are you kidding?\n", id);
 		else {
 			printf("%04d: %s\n", id, re[id].c_str());
 			re[id] = "Checked";
 		}
 	}
 	return 0;
}