#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll GCD(ll a, ll b){ return (a%b)==0 ? b : GCD(b, a%b);}
int main(){
    while(1){
        set<int> s;
        set<int> :: iterator it, it2, rem;
        ll n, gc=0;
        while(1){
            cin>>n;
            if(n==0 && s.size()==0) return 0;
            if(n==0) break;
            s.insert(n);
        }
        rem = s.begin();
        s.erase(rem);
        it=s.begin();
        it2=it;
        it++;
        gc= GCD((*it)-*rem, abs(*it2)-*rem);
        for(int i=1; i<s.size(); i++)
            gc = GCD(gc, abs(*(it++)-*rem));
        cout<<gc<<endl;
    }
    return 0;
}

