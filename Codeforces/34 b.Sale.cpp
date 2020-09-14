#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, c, cnt=0;
    int ar[105];
    cin>>n>>m;
    for (int i = 0; i < n; i++){
        cin>>ar[i];
    }
    sort(ar, ar+n);
    for (int i = 0; i < m; i++){
        if (ar[i]>=0)
            break;
        cnt += ar[i];
    }
    cout << abs(cnt) << endl;
    return 0;
}
