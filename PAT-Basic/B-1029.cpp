#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(void){
	vector<char> v;
	vector<char>::iterator it;
	char tmp;
	string str1, str2;
	cin >> str1 >> str2;
	for(int i = 0, j = 0; i < str1.size();){
		if(str1[i] == str2[j]){
			i++; j++;
		}
		else{
			tmp = str1[i];
			if(tmp >= 'a' && tmp <= 'z')tmp = tmp - 'a' + 'A';
			it = find(v.begin(), v.end(), tmp);
			if(it == v.end()){
				v.push_back(tmp);
			}
			i++;
		}
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i];
	}
	cout << endl;
	return 0;
}
