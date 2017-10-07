#include <iostream>  
#include <cstdio>
using namespace std;  
int main(){
    string password, tryPassword;
    int limit, i;
    cin >> password >> limit;
    cin.get();
    for(i = 0; i < limit; i++){
        //这里必须用 getline,可能会有不可见字符来输入密码，比如空格。
        getline(cin, tryPassword);
        if(password == tryPassword){
            cout << "Welcome in" << endl;
            break;
        }
        else if(tryPassword == "#"){
            break;
        }
        else {
            cout << "Wrong password: " << tryPassword << endl;
        }
    }
    if(i == limit) cout << "Account locked" << endl;
    while(tryPassword != "#")
        cin >> tryPassword;
    return 0;
}  
