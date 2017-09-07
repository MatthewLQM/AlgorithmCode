#include <iostream>
using namespace std;
int main(void){
	string stID[1001];
	int num[1001];
	string tmpID;
	int tmp1, tmp2, n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmpID >> tmp1 >> tmp2;
		stID[tmp1] = tmpID;
		num[tmp1] = tmp2;
	}
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmp1;
		cout << stID[tmp1] << ' ' << num[tmp1] << endl;
	}
	return 0;

}
