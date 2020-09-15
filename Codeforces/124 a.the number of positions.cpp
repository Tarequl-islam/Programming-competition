#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, c, cnt=0;
    cin>>n>>a>>b;
    cout<<n - max(a + 1, n - b) + 1<<endl;
    return 0;
}
