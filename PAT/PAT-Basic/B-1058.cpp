#include <iostream>
#include <string>
#include <vector>
using namespace std;
class ques{
public:
  int c;
  int g, t, a;
  string s;
};
string get_an(void){
  char s[20] = "-------------------";
  string r = "";
  for(int i = 0; i < 20; i++){
    if((s[i] = getchar()) == ')'){
      s[i+1] = '\0';
      break;
    }
  }
  for(int i = 1; s[i] != '-'; i++){
    if(s[i] >= 'a' && s[i] <= 'e'){
      r += s[i];
    }
  }
  return r;
}
int main(void){
  int n, m, c;
  int max = 0;
  char x;
  bool flag = 0;
  string s;
  ques tmp;
  vector<ques> vq;
  vector<ques>::iterator it;
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    tmp.s = "";
    tmp.c = 0;
    cin >> tmp.g >> tmp.t >> tmp.a;
    for(int j = 0; j < tmp.a; j++){
      cin >> x;
      tmp.s += x;
    }
    vq.push_back(tmp);
  }
  for(int i = 0; i < n; i++){
    c = 0;
    for(int j = 0; j < m; j++){
      s = get_an();
      if(s == vq[j].s){
        c += vq[j].g;
      }
      else {
        vq[j].c++;
        if(vq[j].c > max)max = vq[j].c;
        flag = 1;
      }
    }
    cout << c << endl;
  }
  if(flag == 0){
    cout << "Too simple" << endl;
    return 0;
  }
  cout << max;
  for(int i = 0; i < m; i++){
    if(vq[i].c == max)cout << ' ' << i + 1;
  }
  cout << endl;
  return 0;

}