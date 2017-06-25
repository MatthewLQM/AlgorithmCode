#include <iostream>
using namespace std;
int main(void){
	int i;
	double a, b, c;
	int count;
	cin >> count;
	for(i=0;i<count;i++){
		cin >> a >> b >> c;
		if(a+b>c)cout << "Case #" << i+1 << ": true" << endl;
		else cout << "Case #" << i+1 << ": false" << endl;
	}
	return 0;
}
