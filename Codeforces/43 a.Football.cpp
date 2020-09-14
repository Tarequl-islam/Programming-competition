#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, a=0, b=0;
    string s, sa=" ", sb=" ";
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>s;
        if (sa==" "){
            sa=s;
            a++;
        }
        else if (sb==" " && sa !=s){
            sb=s;
            b++;
        }
        else if (s==sa)
            a++;
        else if (s==sb)
            b++;
    }
    
    if(a>=b)
        cout<<sa<<endl;
    else cout<<sb<<endl;
    return 0;
}
