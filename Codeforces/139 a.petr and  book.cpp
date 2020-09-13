#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, a, b, c, cnt=0;
    int ar[1005];
    cin>>n;
    for (int i = 1; i <= 7; i++){
        cin>>ar[i];
        cnt+= ar[i];
    }
    // if(cnt<n){
    //     c = n % cnt;
    //     if (c==0) c=1;
    // }
    // else 
    c = n;
    while (1){
        for (int i = 1; i <= 7; i++){
            if(ar[i] >= c){
                cout<<i<<endl;
                return 0;
            }
            c -= ar[i];
        }
    }
    return 0;
}
