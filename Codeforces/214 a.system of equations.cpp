#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, c, cnt=0;
    int ar[105];
    cin>>n>>m;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= m; j++){
            if (i*i+j == n && i+j*j==m){
                cnt++;
            }
        }
    }
    cout <<cnt<< endl;
    return 0;
}
