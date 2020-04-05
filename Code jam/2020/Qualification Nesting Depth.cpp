#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=1; k<=t; k++){
        int n, i, j, l, dis=0;
        char c;
        string s;
        cin>>s;
        vector<char> v;
        for(i=0;i<s.length(); i++){
            if(s[i]=='0')v.push_back('0');
            else{
                j=(int)s[i]-(int)'0';
                while(j--) v.push_back('(');
                while(1){
                    v.push_back(s[i]);
                    if(i+1 == s.length()){
                        j=(int)s[i]-(int)'0';
                        while(j--) v.push_back(')');
                        break;
                    }
                    dis=(int)s[i]-(int)s[i+1];
                    if(dis>0) while(dis--)
                            v.push_back(')');
                    else while(dis++)
                            v.push_back('(');
                    if(s[i+1]=='0') break;
                    i++;
                }
            }
        }
        cout<<"Case #"<<k<<": ";
        for(i=0;i<v.size(); i++){
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}

