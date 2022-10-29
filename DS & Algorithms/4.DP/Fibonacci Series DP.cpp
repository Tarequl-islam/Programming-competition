#include<bits/stdc++.h>
using namespace std;
#define MAX_N 200000
#define EMPTY_VALUE -1
int memo[MAX_N + 1];
int f(int n) {
    if (n <= 1) return n; 
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = f(n - 1) + f(n - 2);
    return memo[n];
}
int main(){
    int n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
    cin>>n;
    for (int i = 0; i <= MAX_N; i++) {
        memo[i] = EMPTY_VALUE;
    }
    cout<<f(n)<<endl;
    return 0;
}
