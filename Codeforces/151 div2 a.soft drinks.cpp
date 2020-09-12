#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, k, l, c,d,p, nl, np, i, cnt=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    i = min(c*d, (k*l)/nl);
    cout<<min(i , p/np)/n<<endl;
    return 0;
}
