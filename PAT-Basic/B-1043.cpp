#include <iostream>
using namespace std;
int main(void){
	int a[6] = {0};
	char b;
	while((b = getchar()) != '\n'){
		if(b == 'P')a[0]++;
		else if(b == 'A')a[1]++;
		else if(b == 'T')a[2]++;
		else if(b == 'e')a[3]++;
		else if(b == 's')a[4]++;
		else if(b == 't')a[5]++;
	}
	while(a[0] != 0 || a[1] != 0 || a[2] != 0 ||
		a[3] != 0 || a[4] != 0 || a[5] != 0){
		if(a[0] != 0){cout << 'P'; a[0]--;}
		if(a[1] != 0){cout << 'A'; a[1]--;}
		if(a[2] != 0){cout << 'T'; a[2]--;}
		if(a[3] != 0){cout << 'e'; a[3]--;}
		if(a[4] != 0){cout << 's'; a[4]--;}
		if(a[5] != 0){cout << 't'; a[5]--;}
	}
	return 0;
}
