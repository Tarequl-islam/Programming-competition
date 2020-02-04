#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    vector<int> order;
    map<int,int> freq;
    ll n;
    while(scanf("%d", &n) != EOF){
        if(freq.count(n)==0) {
            freq[n]=1;
            order.push_back(n);
        }
        else{
            freq[n]+=1;
        }
    }
    for(int i=0; i<order.size(); i++){
        cout<<order[i]<<" "<<freq[order[i]]<<endl;
    }
    return 0;
}

