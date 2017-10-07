#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class person{
public:
	string name;
	string bir;
	int y, m, d;
	bool operator < (const person &A) const{
        if(A.y != y)return y > A.y;
        else if(A.m != m)return m > A.m;
        else return d > A.d; 
    }  
    bool operator > (const person &A) const{
        if(A.y != y)return y < A.y;
        else if(A.m != m)return m < A.m;
        else return d < A.d; 
    }  
    person &operator = (const person &A){
    	name = A.name;
    	bir = A.bir;
    	y = A.y; m = A.m; d = A.d;
    	return *this;
    }
};
int main(void){
	person max, min, tmp, older, younger;
	older.y = 1814; older.m = 9; older.d = 6;
	younger.y = 2014; younger.m = 9; younger.d = 6;
	max = younger; min = older;
	int count = 0, num;
	cin >> num;
	for(int i = 0; i < num; i++){
		cin >> tmp.name >> tmp.bir;
		tmp.y = atoi(tmp.bir.substr(0, 4).c_str());
		tmp.m = atoi(tmp.bir.substr(5, 2).c_str());
		tmp.d = atoi(tmp.bir.substr(8, 2).c_str());
		if(tmp > older || tmp < younger)continue;
		count++;
		if(tmp > max)max = tmp;
		if(tmp < min)min = tmp;
	}
	if(count == 0){
		cout << '0' << endl;
		return 0;
	}
	cout << count << ' ' << max.name << ' ' << min.name << endl;
	return 0; 
}
