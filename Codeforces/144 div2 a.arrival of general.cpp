#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, m, mi, ma, i, min=100, max=0;
    ll arr[101];
    cin>>n;
    for (i = 1; i <= n; i++){
        cin>>arr[i];
        if(max<arr[i]){
            max= arr[i];
            ma=i;
        }
        if(min>=arr[i]){
            min= arr[i];
            mi=i;
        }
    }
    m = ma-1+(n-mi);
    if(ma<mi)
        cout<<m<<endl;
    else 
        cout<<m-1<<endl;
}
