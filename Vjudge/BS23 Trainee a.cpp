#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){ 
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, k, evn = 0, odd = 0;
        ll ar[100005];
        cin>>n>>m;
        if(n&1){
            odd+= (n+1)/2;
        }
        else{
            a = n/2;
            if(a&1){
                odd+= 1 + n/2;
            }
            else odd += n/2;
        }
        evn += n-odd;
        ll odd1=0;
        if(m&1){
            odd1+= (m+1)/2;
        }
        else{
            a = m/2;
            if(a&1){
                odd1+= 1 + m/2;
            }
            else odd1 += m/2;
        }
        evn += m-odd1;
        odd += odd1;
        cout<<"Case "<<": \n";
        cout<<"Odd = "<<odd<<endl;
        cout<<"Even = "<<evn<<endl;
    }
    return 0;
}
