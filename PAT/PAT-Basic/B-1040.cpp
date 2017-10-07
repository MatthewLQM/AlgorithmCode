#include <iostream>
using namespace std;
int main(void){
	long long int p = 0, pa = 0, pat = 0;
	string str;
	cin >> str;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == 'P')p += 1;
		else if(str[i] == 'A')pa += p;
		else pat += pa;
	}
	cout << pat % 1000000007 << endl;
	return 0;
}
