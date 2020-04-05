#include<bits/stdc++.h>
using namespace std;
int main(){
        int t;
    cin>>t;
    while(t--){
        int a, b, c=0;
        cin>>a>>b;
        if(b%a==0){
            cout<<0<<end;
        }
        else{
            while(1){
                c++;
                a++;
                if(b%a==0){
                    cout<<c<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
