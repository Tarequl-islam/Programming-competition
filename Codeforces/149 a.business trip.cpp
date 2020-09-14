#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, tm=0, a, b, c, cnt=1;
    int ar[105];
    cin>>n;
    for (int i = 0; i < 12; i++){
        cin>>ar[i];
    }
    
    if (n<=0){
        cout<<0<<endl;
        return 0;
    }
    sort(ar, ar+12);
    for (int i = 11; i >= 0; i--){
        if (ar[i]+tm >= n){
            cout<<cnt<<endl;
            return 0;
        }
        tm += ar[i];
        cnt++;
    }
    cout<<-1<<endl;
    return 0;
}
