#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, a, b, c, cnt=10000;
    int ar[105];
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>ar[i];
    }
    for (int i = 1; i < n; i++){
        if (abs(ar[i]-ar[i+1]) < cnt){
            cnt = abs(ar[i] - ar[i + 1]);
            a = i;
            b = i+1;
        }
    }
    if (abs(ar[1] - ar[n]) < cnt){
        a = n;
        b = 1;
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
