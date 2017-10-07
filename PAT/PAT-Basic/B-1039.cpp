#include <iostream>
using namespace std;
int main(void){
	int a[128] = {0}, b[128] = {0};
	int m = 0, n = 0, flag = 0;
	string str1, str2;
	cin >> str1 >> str2;
	for(int i = 0; i < str1.size(); i++){
		a[str1[i]]++;
	}
	for(int i = 0; i < str2.size(); i++){
		b[str2[i]]++;
	}
	for(int i = 0; i < 128; i++){
		if(b[i] > a[i]){
			flag = 1;
			n += b[i] - a[i];
		}
		else m += a[i] - b[i];
	}
	if(flag == 1)cout << "No " << n << endl;
	else cout << "Yes " << m << endl;
	return 0;
}
