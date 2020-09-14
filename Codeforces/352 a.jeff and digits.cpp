#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, z = 0, f = 0;
    cin >> n;
    for (int i = 0; i <n; i++){
        cin >> a;
        if(a==5) f++;
        else if(a==0) z++;
    }
    if(z==0){
        cout<<-1<<endl;
    }
    else if(f<9){
        cout<<0<<endl;
    }
    else{
        f = f- f%9;
        for (int i = 0; i < f; i++){
            cout<<5;
        }
        for (int i = 0; i < z; i++){
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
