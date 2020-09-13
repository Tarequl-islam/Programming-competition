#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, a, b, c, cnt=0;
    cin>>n>>a;
    if (n % 2 == 0){
        if (a <= n / 2){
            cout << (2 * a) - 1 << endl;
            return 0;
        }
        else cout << (a - (n / 2)) *2 << endl;
    }
    else{
        if (a*2 <= n+1){
            cout << (2 * a) - 1 << endl;
            return 0;
        }
        else cout << ((a - (n / 2)) *2)-2 << endl;
    }
    return 0;
}