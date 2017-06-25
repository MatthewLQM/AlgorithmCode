#include <iostream>
using namespace std;
int main(void){
	int m, n;
	bool first = true;
	while(cin >> n >> m){
		if(m != 0){
			if(first){
				cout << n*m << " " << m-1;
				first = false;
			}
			else{
				cout << " " << n*m << " " << m-1;
 			}
		}
	}
	if(first == true){
		cout << "0 0";
	}
	return 0;
}
