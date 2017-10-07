#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct Student{
    char name[20];
    int height;
};
bool Cmp(Student s1,Student s2){
    if(s1.height!=s2.height){       //身高不相同，身高矮的在前
        return s1.height<s2.height;
    }
    else return strcmp(s1.name,s2.name)>0;//身高相同，比较名字，字典序大的在前
}   
void output(Student s[],int begin,int end){//对每一排进行符合要求的排序并输出
    Student temp[end-begin+2];//注意此处数组的大小
    int m=(end-begin)/2+1;  
    int count_left=0;       //左边到了第几个
    int count_right=0;      //右边到了第几个
    bool should_right=false;//是否该右边了
    for(int i=end;i>=begin;i--){
        if(i==end)  temp[m]=s[i];//先把最大值放在中间
        else{
            if(should_right){
                count_right++;
                temp[m+count_right]=s[i];
                should_right=false; 
            }
            else{
                count_left--;
                temp[m+count_left]=s[i];
                should_right=true;
            }       
        }   
    }
    for(int i=m+count_left;i<=m+count_right;i++){
        if(i!=(m+count_left))   cout<<" ";
        cout<<temp[i].name;
    }   
    cout<<endl;
}
int main(){
    int N,K;
    Student s[10005];
    cin>>N>>K;
    char name[20];
    int height;
    for(int i=1;i<=N;i++){  //为了每一排排序计算中间值的方便，从1开始
        cin>>s[i].name>>s[i].height;
    }
    sort(s+1,s+N+1,Cmp);
    int last=(K-1)*(N/K)+1;//计算出最后一排开始的元素
    output(s,last,N);   
     for(int i=last-N/K;i>=1;i-=N/K)//输出除了最后一排的元素
        output(s,i,i+N/K-1);
    return 0;
}
///////////////////////////////////////
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class person{
public:
    string name;
    int h;
};
int comp(const void *a, const void *b){
    if(((person *)b)->h == ((person *)a)->h)
        return ((person *)a)->name[0] - ((person *)b)->name[0];
    return ((person *)b)->h - ((person *)a)->h;
}
int main(void){
    int n, k, e, e1;
    int a, b, flag, i;
    cin >> n >> k;
    e = n / k;
    if(k == 1)e1 = n;
    else e1 = n - (k - 1) * e;
    string q2[e1];
    person p[n];
    for(int i = 0; i < n; i++){
        cin >> p[i].name >> p[i].h; 
    }
    qsort(p, n, sizeof(person), comp);
    if(k == 1){
        i = 0;
        a = e1 / 2; b = 1; flag = -1;
        for(int y = 0; y < e1; y++){
            q2[a] = p[i].name;
            a += flag * b;
            flag *= -1;
            b++;i++;
        }
        cout << q2[0];
        for(int i = 1; i < e1; i++)cout << " " << q2[i];
        return 0;
    }
    string q[k - 1][e];
    
    
    for(int i = 0, j = 0; i < n;){
        a = e1 / 2; b = 1; flag = -1;
        for(int y = 0; y < e1; y++){
            q2[a] = p[i].name;
            a += flag * b;
            flag *= -1;
            b++;i++;
        }
        for(;j < k - 1; j++){
            a = e / 2; b = 1; flag = -1;
            for(int y = 0; y < e; y++){
                q[j][a] = p[i].name;
                a += flag * b;
                flag *= -1;
                b++;i++;
            }
        }
    }
    cout << q2[0];
    for(int i = 1; i < e1; i++)cout << " " << q2[i];
    cout << endl;
    for(int i = 0; i < k - 1; i++){
        cout << q[i][0];
        for(int j = 1; j < e; j++){
            cout << ' ' << q[i][j];
        }
        cout << endl;
    }
    return 0;
}
