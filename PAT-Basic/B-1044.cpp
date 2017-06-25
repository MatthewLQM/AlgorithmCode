#include <iostream>
#include <stdlib.h>
using namespace std;
int main(void){
	int n, match, out;
	char a;
	string tmp;
	string low[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	string high[13] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
	scanf("%d", &n);
	getchar();
	for(int j = 0; j < n; j++){
		tmp = "";
		while(a = getchar()){
			if(a == ' '){
				match = 13; out = 0;
				for(int i = 0; i < 13; i++){
					if(tmp == high[i]){ match = i; break; }
				}
				out += match * 13;
				cin >> tmp;
				for(int i = 0; i < 13; i++){
					if(tmp == low[i]){ match = i; break; }
				}
				out += match;
				cout << out << endl;
				getchar();
				break;
			}
			else if(a == '\n'){
				match = 13; out = 0;
				for(int i = 0; i < 13; i++){
					if(tmp == high[i]){ match = i; break; }
				}
				if(match != 13){
					out += match * 13;
					cout << out << endl;
					break;
				}
				for(int i = 0; i < 13; i++){
					if(tmp == low[i]){ match = i; break; }
				}
				if(match != 13){
					out += match;
					cout << out << endl;
					break;
				}
				out = atoi(tmp.c_str());
				if(out >= 13){
					cout << high[out / 13];
					if(out % 13 != 0)cout << ' ' << low[out % 13] << endl;
					else cout << endl;
				}
				else cout << low[out % 13] << endl;
				break;
			}
			else tmp += a;
		}
	}
	return 0;
}