#include<bits/stdc++.h>
using namespace std;
#define MAX_N 20
#define EMPTY_VALUE -1
int mem[MAX_N][MAX_N];

int lcs(int i,int j, string &S, string &W) {   
    if(i == S.size() || j == W.size()) return 0;
    if(mem[i][j] != EMPTY_VALUE) 
        return mem[i][j];
    int ans=0;
    if(S[i] == W[j]) {
        ans = 1 + lcs(i + 1,j + 1, S, W);
    }
    else{
        int val1 = lcs(i + 1, j, S, W);
        int val2 = lcs(i,j + 1, S, W);
        ans=max(val1,val2);
    }
    mem[i][j] = ans;
    return mem[i][j];
}
/*int lcsIterative(string S, string W) {
    int n = S.size();
    int m = W.size();
    for (int i = 0;i < n;i++) mem[i][m] = 0;
    for (int j = 0;j < m;j++) mem[n][j] = 0;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            if (S[i] == W[j]) {
                mem[i][j] = mem[i + 1][j + 1] + 1;
            } else {
                mem[i][j] = max(mem[i + 1][j], mem[i][j + 1]);
            }
        }
    }
    return mem[0][0];
} */
int main(){
    string s, w;
    cin>>s>>w;
    for (int i = 0; i <= MAX_N; i++)
        for (int j = 0; j <= MAX_N; j++)
            mem[i][j] = EMPTY_VALUE;
    cout<<lcs(0,0,s,w)<<endl;
    return 0;
}
