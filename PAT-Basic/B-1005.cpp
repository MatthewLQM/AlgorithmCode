#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class list{
public:
 	vector<int> num;
	list(){}
	list(int new_num){
		int n = new_num;
		while(n != 1){
			num.push_back(n);
			if(n % 2 == 0) n /= 2;
			else n = (3 * n + 1) / 2;
		}
	}
	bool check(const int n){
		for(int i = 0; i < num.size(); i++){
			if(num[i] == n)return true;
		}
		return false;	
	}
};
int comp(const void*a,const void*b)
{
	return *(int*)b - *(int*)a;
}
int main(void){
	int new_num;
	int count, flag;
	int i, j;
	int *key_num;
	list *tmp;
	vector<list *> key;
	vector<list *>::iterator it;
	cin >> count;
	for(i = 0; i < count; i++){
		cin >> new_num;
		tmp = new list(new_num);
		for(j = 0; j < key.size(); j++){
			if(tmp->check(key[j]->num[0])){
				it = key.begin() + j;
				key.erase(it);
				key.push_back(tmp);
				break;
			}
			else if(key[j]->check(tmp->num[0])){
				break;
			}
		}
		if(j == key.size())
			key.push_back(tmp);
	}
	key_num = new int[key.size()];
	for(i = 0; i < key.size(); i++){
		key_num[i] = key[i]->num[0];
	}
	qsort(key_num, key.size(), sizeof(int), comp);
	for(i = 0; i < key.size(); i++){
		cout << key_num[i];
		if(i < key.size() - 1)cout << " ";
	}
	return 0;
}