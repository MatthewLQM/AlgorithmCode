#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(void){
	int n, count = 0, tmpnum;
	int w[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char m[12] = "10X98765432";
	vector<string> v;
	string tmp;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		tmpnum = 0;
		for(int j = 0; j < 17; j++){
			if(tmp[j] > '9' || tmp[j] < '0'){
				v.push_back(tmp);
				break;
			}
			tmpnum += (tmp[j] - '0')*w[j];
			if(j == 16 && m[tmpnum%11] != tmp[17]){
				v.push_back(tmp);
			}
		}
	}
	if(v.size() == 0){
		cout << "All passed" << endl;
		return 0;
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	return 0;
}
