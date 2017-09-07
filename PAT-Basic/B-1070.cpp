#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    // 搞清逻辑，每次合并排序后的最后两个就好。
    int n;
    scanf("%d", &n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    sort(v.begin(), v.end());
    int result = v[0];
    for (int i = 1; i < n; i++)
        result = (result + v[i]) / 2;
    printf("%d", result);
    return 0;
}