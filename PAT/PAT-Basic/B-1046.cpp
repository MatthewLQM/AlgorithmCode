#include <iostream>
#include <cmath>
using namespace std;
int main(void){
	int ca = 0, cb = 0;
	int a, b, c, d, n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> b >> a >> d >> c;
		b += d;
		if(a == b && c == b)continue;
		if(a != b && c != b)continue;
		if(a == b && c != b)cb++;
		else if(a !=b && c == b)ca++;
	}
	cout << ca << ' ' << cb << endl;
	return 0;
}