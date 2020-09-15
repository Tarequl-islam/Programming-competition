#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, c, minn=2222222;
    int ar[100];
    cin>>n>>m;
    for (int i = 0; i < m; i++){
        cin>>ar[i];
    }
    sort(ar, ar+m);
    for (int i = 0; i <= m-n; i++){
        if (ar[i+(n-1)]-ar[i]<minn){
            minn = ar[i+(n-1)] - ar[i];
        }
    }
    cout <<minn<< endl;
    return 0;
}
