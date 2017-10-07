#include <iostream>
using namespace std;
int main(void){
	int i, j, k, temp;
	int count, shift;
	int num[101];
	cin >> count;
	cin >> shift;
	while(shift >= count){
		shift -= count;
	}
	for(i = 0; i < count; i++){
		if(i + shift < count)cin >> num[i+shift];
		else cin >> num[i+shift-count];
	}
	for(i=0;i<count;i++){
		cout << num[i];
		if(i < count - 1)cout << " ";
	}
	return 0;
}