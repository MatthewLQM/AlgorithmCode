#include <iostream>
using namespace std;
int main(void){
	int h = 0, m = 0, s = 0, t;
	int c1, c2;
	cin >> c1 >> c2;
	if((c2 - c1)%100 < 50)t = (c2 - c1)/100;
	else t = (c2 - c1)/100 + 1;
	h = t/3600;
	t = t%3600;
	m = t/60;
	s = t%60;
	printf("%02d:%02d:%02d\n", h, m, s);
	return 0;
}
