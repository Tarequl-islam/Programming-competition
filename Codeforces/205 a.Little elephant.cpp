#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, a, b, c, minn= 1000000009, cnt=0;
    int ar[100005];
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>ar[i];
        if (ar[i]<minn){
            minn = ar[i];
            a = i;
        }
    }
    for (int i = 1; i <= n; i++){
        if (ar[i] == minn){
            cnt++;
        }
    }
    if (cnt==1){
        cout<<a<<endl;
    }
    else cout<<"Still Rozdil\n";
    return 0;
}
