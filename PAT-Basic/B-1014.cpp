#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(void){
	string str1, str2, str3, str4;
	cin >> str1 >> str2 >> str3 >> str4;
	for(int i=0, flag = 0;;i++){
		if(str1[i] == str2[i] && str1[i] >= 'A' && str1[i] <= 'G' && flag == 0){
			flag = 1;
			if(str1[i] == 'A')cout << "MON ";
			else if(str1[i] == 'B')cout << "TUE ";
			else if(str1[i] == 'C')cout << "WED ";
			else if(str1[i] == 'D')cout << "THU ";
			else if(str1[i] == 'E')cout << "FRI ";
			else if(str1[i] == 'F')cout << "SAT ";
			else if(str1[i] == 'G')cout << "SUN ";
		}
		else if(str1[i] == str2[i] && flag == 1 && ((str1[i] >= '0' && str1[i] <= '9') || (str1[i] >= 'A' && str1[i] <= 'N'))){
			if(str1[i] == 'A')cout << "10:";
			else if(str1[i] == 'B')cout << "11:";
			else if(str1[i] == 'C')cout << "12:";
			else if(str1[i] == 'D')cout << "13:";
			else if(str1[i] == 'E')cout << "14:";
			else if(str1[i] == 'F')cout << "15:";
			else if(str1[i] == 'G')cout << "16:";
			else if(str1[i] == 'H')cout << "17:";
			else if(str1[i] == 'I')cout << "18:";
			else if(str1[i] == 'J')cout << "19:";
			else if(str1[i] == 'K')cout << "20:";
			else if(str1[i] == 'L')cout << "21:";
			else if(str1[i] == 'M')cout << "22:";
			else if(str1[i] == 'N')cout << "23:";
			else if(str1[i] == '0')cout << "00:";
			else if(str1[i] == '1')cout << "01:";
			else if(str1[i] == '2')cout << "02:";
			else if(str1[i] == '3')cout << "03:";
			else if(str1[i] == '4')cout << "04:";
			else if(str1[i] == '5')cout << "05:";
			else if(str1[i] == '6')cout << "06:";
			else if(str1[i] == '7')cout << "07:";
			else if(str1[i] == '8')cout << "08:";
			else if(str1[i] == '9')cout << "09:";
			break;
		}
	}
	for(int i=0;;i++){
		if(str3[i] == str4[i] && ((str3[i] >= 'a' && str3[i] <= 'z') || (str3[i] >= 'A' && str3[i] <= 'Z'))){
			if(i < 10)cout << '0' << i;
			else cout << i;
			break;
		}
	}

}
