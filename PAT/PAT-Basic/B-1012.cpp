#include <iostream>
using namespace std;
int main(void){
	int i;
	int a, b[5] = {0};
	bool flag = true;
	bool first = false;
	double count_4 = 0;\
	double b3 = 0;
	int count;
	cin >> count;
	for(i=0;i<count;i++){
		cin >> a;
		if(a%10 == 0)b[0] += a;
		else if(a%5 == 1){
			if(flag)b[1] += a;
			else b[1] -= a;
			first = true;
			flag = !flag;
		}
		else if(a%5 == 2)b[2]++;
		else if(a%5 == 3){
			b[3] += a;
			count_4++;  
		}
		else if(a%5 == 4){
			if(a > b[4])b[4] = a;
		}
	}
	if(count_4 != 0)b3 = (double)b[3] * 1.0/count_4;
	if(b[0] == 0)cout << 'N' << ' ';
	else cout << b[0] << ' ';
	if(first == false)cout << 'N' << ' ';
	else cout << b[1] << ' ';
	if(b[2] == 0)cout << 'N' << ' ';
	else cout << b[2] << ' ';
	if(b3 == 0)printf("N ");
	else printf("%.1f ", b3);
	if(b[4] == 0)cout << 'N';
	else cout << b[4];
	return 0;
}
