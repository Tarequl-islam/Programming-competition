#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int temp=0;
    cin>>str;
    for(int i=0; i<str.size(); i++){
        if(str[i]>=65 && str[i]<=92) temp++;
    }
    if(temp*2 > str.size()){
        for(int i=0; i<str.size(); i++){
            if(str[i]>=97 && str[i]<=124){
                str[i]=str[i]-32;
            }
        }
    }
    else {
        for(int i=0; i<str.size(); i++){
            if(str[i]>=65 && str[i]<=92){
                str[i]=str[i]+32;
            }
        }
    }
    cout<<str<<"\n";
    return 0;
}
