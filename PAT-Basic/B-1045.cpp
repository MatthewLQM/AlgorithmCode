#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int main(void){
	int n, max = 0, tmp;
	vector<int> can;
	vector<int>::iterator it;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		while(can.size() > 0 && can.back() > tmp){
			can.pop_back();
		}
		if(tmp > max){
			max = tmp;
			can.push_back(max);
		}
	}
	cout << can.size() << endl;
	if(can.size() == 0){
		cout << endl;
		return 0;
	}
	cout << can[0];
	for(int i = 1; i < can.size(); i++){
		cout << ' ' << can[i];
	}
	cout << endl;
	return 0;
}
