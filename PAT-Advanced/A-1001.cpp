#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;
int main(void){
	int a, b, c, i = 0;
	int flag = 0;
	string output = "";
	char x;
	cin >> a >> b;
	c = a + b;
	if(c < 0){
        flag = 1;
        c = -c;
	}
    if(c == 0){
        cout << 0 << endl;
        return 0;
    }
	while(c != 0){
        if(i == 3){
			output = output + ',';
			i = 0;
		}
        x = c % 10 + 48;
		output += x;
		i++;
		c = c / 10;
	}
	if(flag == 1)output = output + '-';
	for(i = 0; i < output.size(); i++){
		cout << output[output.size() - i - 1];
	}
	cout << endl;
	return 0;
}
