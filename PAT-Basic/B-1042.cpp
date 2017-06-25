#include <iostream>
using namespace std;
int main(void){
	string str;
	int a[26] = {0}, max = 0;
	char b;
	while((b = getchar()) != '\n'){
		if(b >= 'a' && b <= 'z')
			a[b - 'a']++;
		else if(b >= 'A' && b <= 'Z')
			a[b - 'A']++;
	}
	for(int i = 1; i < 26; i++){
		if(a[i] > a[max])max = i;
	}
	b = 'a' + max;
	cout << b << ' ' << a[max] << endl;
	return 0;

}
