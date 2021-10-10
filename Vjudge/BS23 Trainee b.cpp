#include<iostream>
using namespace std;
#define ll long long

int main(){ 
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c, i=0, j, k, sum = 0, odd = 0;
        cin>>n;
        sum = 1+n;
        double dd = sum/2.0;
        sum = dd*n;
        while(1<<i<=n){
            odd+= 1<<i;
            i++;
        }
        sum-= odd*2;
        cout<<sum<<endl;
    }
    return 0;
}
