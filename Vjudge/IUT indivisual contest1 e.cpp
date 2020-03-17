#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s1, s2;
    cin>>s1>>s2;
    if(s1.length()>s2.length()){
        cout<<">\n";
        return 0;
    }
    if(s1.length()<s2.length()){
        cout<<"<\n";
        return 0;
    }
    for(int i=0; i<s1.length(); i++){
        if(s1[i]>s2[i]){
            cout<<">\n";
            return 0;
        }
        if(s1[i]<s2[i]){
            cout<<"<\n";
            return 0;
        }
    }
    cout<<"=";
    return 0;
}

