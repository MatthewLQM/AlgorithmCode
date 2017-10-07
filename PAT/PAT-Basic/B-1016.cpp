#include <iostream>
#include <string>
using namespace std;
int main(void){
	string stra, strb;
	int a, b, Da = 0, Db = 0;
	cin >> stra >> a >> strb >> b;
	for(int i = 0; i < stra.size(); i++){
		if(stra[i] - '0' == a)Da = Da * 10 + a;
	}
	for(int i = 0; i < strb.size(); i++){
		if(strb[i] - '0' == b)Db = Db * 10 + b;
	}
	cout << Da + Db << endl;
	return 0;
}
