#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class good{
public:
	double a, s;
	double p;
	bool operator < (const good &A) const{
        return p < A.p; 
    }  
};
int main(void){
	int num, need;
	double w;
	double account, sell;
	double out = 0;
	good temp;
	vector<double> va, vs;
	vector<good> vg;
	cin >> num >> w;
	for(int i = 0; i < num; i++){
		cin >> account;
		va.push_back(account);
	}
	for(int i = 0; i < num; i++){
		cin >> sell;
		vs.push_back(sell);
	}
	for(int i = 0; i < num; i++){
		temp.a = va[i]; temp.s = vs[i];
		temp.p = 1.0 * temp.s / temp.a;
		vg.push_back(temp);
	}
	sort(vg.begin(), vg.end());
	for(int i = vg.size() - 1;i >= 0; i--){
		if(w >= vg[i].a){
			out += vg[i].p * vg[i].a;
			w -= vg[i].a;
		}
		else{
			out += vg[i].p * w;
			break;
		}
	}
	printf("%.2lf", out);
	return 0;
}
