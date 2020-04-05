#include<bits/stdc++.h>
using namespace std;
int used[20], number[20], n, t=0;
void Permutation(int att){
    if(att == n+1){
        for(int i=1; i<=n; i++)
            cout<<number[i]<<" ";
        cout<<"\n";
        t++;
        return;
    }
    for(int i=1; i<=n; i++){
        if(!used[i]){
            used[i]=1;
            number[att]=i;
            Permutation(att+1);
            used[i]=0;
        }
    }
}
int main(){
    cin>>n;
    Permutation(1);
    cout<<t;
    return 0;
}
