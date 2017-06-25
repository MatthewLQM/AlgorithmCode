#include <iostream>
#include <string>
using namespace std;
int main(void){
	string a;
	int b, c = 0, flag = 0, out;
	cin >> a >> b;
	if(a.size() == 1&&a[0] - '0' < b){
		cout << "0 " << a[0] - '0';
		return 0;
	}
	for(int i = 0; i < a.size(); i++){
		out = (c * 10 + a[i] - '0')/b;
		if(flag != 0 || out != 0){
			cout << out;
			flag = 1;
		}
		c = (c * 10 + a[i] - '0')%b;
	}
	cout << ' ' << c << endl;
	return 0;
}
