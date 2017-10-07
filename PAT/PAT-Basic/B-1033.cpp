#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX 100000
int main(void){
	string str1 = "", str2 = "";
	char bad_key;
	int flag[66];
	for(int i = 0; i < 66; i++)flag[i] = 1;
	while((bad_key = getchar()) != '\n')str1 += bad_key;
	while((bad_key = getchar()) != '\n')str2 += bad_key;
	for(int i = 0; i < str1.size(); i++){
		if(str1[i] >= 'A' && str1[i] <= 'Z'){
			flag[str1[i] - 'A'] = 0;
			flag[str1[i] - 'A' + 26] = 0;
		}
		else if(str1[i] >= '0' && str1[i] <= '9'){
			flag[str1[i] - '0' + 52] = 0;
		}
		else if(str1[i] == '_')flag[62] = 0;
		else if(str1[i] == ',')flag[63] = 0;
		else if(str1[i] == '.')flag[64] = 0;
		else if(str1[i] == '-')flag[65] = 0;
		else if(str1[i] == '+'){
			for(int j = 26; j < 52; j++){
				flag[j] = 0;
			}
		}
	}
	for(int i = 0; i < str2.size();i++){
		if(str2[i] >= 'A' && str2[i] <= 'Z'){
			if(flag[str2[i] - 'A' + 26] != 0)cout << str2[i];
		}
		else if(str2[i] >= 'a' && str2[i] <= 'z'){
			if(flag[str2[i] - 'a'] != 0)cout << str2[i];
		}
		else if(str2[i] >= '0' && str2[i] <= '9'){
			if(flag[str2[i] - '0' + 52] != 0)cout << str2[i];
		}
		else if(str2[i] == '_' && flag[62] != 0)cout << str2[i];
		else if(str2[i] == ',' && flag[63] != 0)cout << str2[i];
		else if(str2[i] == '.' && flag[64] != 0)cout << str2[i];
		else if(str2[i] == '-' && flag[65] != 0)cout << str2[i];
	}
	cout << endl;
	return 0;
}
