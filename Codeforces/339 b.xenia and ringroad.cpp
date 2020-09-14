#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m, a, b, c, cnt = 0;
    int ar[100005];
    cin >> n>>m;
    for (int i = 1; i <= m; i++){
        cin >> ar[i];
    }
    cnt+= ar[1]-1;
    for (int i = 2; i <= m; i++){
        if (ar[i] < ar[i-1]){
            cnt+= (n-ar[i-1])+ar[i];
        }
        else{
            cnt+= ar[i]-ar[i-1];
        }
    }
    cout << cnt << endl;
    return 0;
}
