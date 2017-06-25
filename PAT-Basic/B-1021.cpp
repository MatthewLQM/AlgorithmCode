#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(void){
	string str;
	int a[10] = {0};
	cin >> str;
	for(int i = 0; i < str.size(); i++){
		a[str[i] - '0']++;
	}
	for(int i = 0; i < 10; i++){
		if(a[i] != 0){
			cout << i << ':' << a[i] << endl;
		}
	}
	return 0;
}
