#include <iostream>
#include <string>
using namespace std;
void find_max(int b, int c, int j){
	char a[3] = {'B', 'C', 'J'};
	int max = 2;
	if(c >= j)max = 1;
	if(b >= c && b >= j)max = 0;
	cout << a[max];
}
int main(void){
	int count;
	char a, b;
	int a1 = 0, a2 = 0, a3 = 0, b1 = 0, b2 = 0, b3 = 0;
	int ab = 0, ac = 0, aj = 0, bb = 0, bc = 0, bj = 0;
	cin >> count;
	for(int i = 0; i < count; i++){
		cin >> a >> b;
		if((a == 'B' && b == 'B') || (a == 'C' && b == 'C') || (a == 'J' && b == 'J')){
			a2++;b2++;
		}
		else if(a == 'B' && b == 'C'){
			a1++;b3++;ab++;
		}
		else if(a == 'C' && b == 'J'){
			a1++;b3++;ac++;
		}
		else if(a == 'J' && b == 'B'){
			a1++;b3++;aj++;
		}
		else if(a == 'B' && b == 'J'){
			a3++;b1++;bj++;
		}
		else if(a == 'C' && b == 'B'){
			a3++;b1++;bb++;
		}
		else if(a == 'J' && b == 'C'){
			a3++;b1++;bc++;
		}
	}
	cout << a1 << ' ' << a2 << ' ' << a3 << endl;
	cout << b1 << ' ' << b2 << ' ' << b3 << endl;
	find_max(ab, ac, aj);
	cout << ' ';
	find_max(bb, bc, bj);
	return 0;
}
