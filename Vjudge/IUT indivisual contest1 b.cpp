#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    //freopen("test.txt", "r", stdin);
    while(1){
    int n, a, b, tem=0, sum=0;
    vector<int> v;
    cin>>n;
    if(n==-1)break;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
        sum+=a;
    }
    b= sum/n;
    if(b*n != sum){
        cout<<-1<<endl;
        continue;
    }
    for(int i=0; i<n; i++){
        if(v[i]>b) tem+=v[i]-b;
    }
    cout<<tem<<endl;
    }
    return 0;
}
