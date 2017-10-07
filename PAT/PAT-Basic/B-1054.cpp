#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void){
	int n, flag;
	double tmp, t;
	vector<double> v;
	string in;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> in;
		flag = 0;
		for(int j = 0; j < in.size(); j++){
			if(j == 0 && in[j] == '-' && in.size() != 1)continue;
			else if(flag == 0 && in[j] >= '0' && in[j] <= '9')continue;
			else if(flag == 0 && in[j] == '.')flag = 1;
			else if(flag > 0 && in[j] >= '0' && in[j] <= '9')flag++;
			else { flag = -1; break; }
			if(flag == 4){ flag = -1; break; }
		}
		if(flag == -1)cout << "ERROR: " << in << " is not a legal number" << endl;
		else {
			tmp = atof(in.c_str());
			if(tmp > 1000 || tmp < -1000){
				cout << "ERROR: " << in << " is not a legal number" << endl;
				continue;
			}
			v.push_back(tmp);
		}
	}
	if(v.size() == 0){
		cout << "The average of 0 numbers is Undefined" << endl;
	}
	else if(v.size() == 1){
		cout << "The average of 1 number is ";
		printf("%.2lf\n", t);
	}
	else {
		t = 0;
		for(int i = 0; i < v.size(); i++){
			t += v[i];
		}
		t /= v.size();
		cout << "The average of " << v.size() << " numbers is ";
		printf("%.2lf\n", t);
	}
	return 0;
}
