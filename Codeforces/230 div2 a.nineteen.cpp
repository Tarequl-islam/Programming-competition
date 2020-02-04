#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){  //nineteen n3 e3 i1 t1
    char str[1000];
    int temp=0,n=0,e=0,ii=0, t=0;
    cin>>str;
    for(int i=0; i<strlen(str); i++){
        if(str[i] == 'n') n++;
        if(str[i] == 'e') e++;
        if(str[i] == 'i') ii++;
        if(str[i] == 't') t++;
    }
    n=n-1/2;
    e=e/3;
    temp = ii;
    temp = min(temp, t);
    temp = min(temp, n);
    temp = min(temp, e);
    cout<<temp<<"\n";
    return 0;
}

