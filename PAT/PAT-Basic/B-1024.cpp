#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdlib.h>
using namespace std;
int main(void){
	int f1 = 0, d = 2, e, f2;
	int p;
	string str;
	string sub_str;
	cin >> str;
	for(int i = 3;i < str.size();i++){
		if(str[i] == 'E'){
			e = i;
			f2 = e + 1;
			break;
		}
	}
	sub_str = str.substr(f2+1, str.size() - f2 - 1);
	p = atoi(sub_str.c_str());
	if(p == 0){
		for(int i = 0; i < e; i++)cout << str[i];
		return 0;
	}
	if(str[0] == '-')cout << '-';
	if(str[f2] == '-'){
		cout << "0.";
		for(int i = 1; i < p; i++)cout << '0';
		cout << str[1];
		for(int i = 3;i < e;i++){
			cout << str[i];
		}
		return 0;
	}
	else{
		cout << str[1];
		if(p >= e - 3){
			for(int i = 3; i < e; i++)cout << str[i];
			for(int i = 0; i < p - e + 3; i++)cout << '0';
		}
		else{
			for(int i = 3; i < p + d + 1; i++)cout << str[i];
			cout << '.';
			for(int i = p + d + 1; i < e + 2 - p; i++)cout << str[i];
		}
	}
	return 0;
}
