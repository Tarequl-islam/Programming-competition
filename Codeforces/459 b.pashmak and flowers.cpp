#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, m, a=0, b=0,c=0, i, mn, mx;
    int ar[200005];
    cin>>n;
    for (i = 0; i < n; i++){
        cin>>ar[i];
    }
    sort(ar, ar+n);
    mn=ar[0];
    mx=ar[n-1];
    i=0;
    if(mn==mx){
        m=n;
        for (int j = 0; j < n; j++){
            m--;
            c+= m;
        }
        cout <<mx-mn<<" "<<c<< endl;
        return 0;
    }
    while (ar[i]==mn){
        a++;
        i++;
    }
    i=1;
    while (ar[n-i]==mx){
        b++;
        i++;
    }
    cout <<mx-mn<<" "<<a*b<< endl;
    return 0;
}
