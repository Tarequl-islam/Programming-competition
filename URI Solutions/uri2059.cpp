#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    while(1){//scanf("%d", &n) != EOF){
        int m, x=0;
        while(n--){
            cin>>m;
            if(m>x)x=m;
        }
        if(x<10) cout<<"1"<<endl;
        else if(x>= 10 && x<20) cout<<"2"<<endl;
        else if(x>=20) cout<<"3"<<endl;
    }
    return 0;
}

