#include <bits/stdc++.h>
using namespace std;
int toggle(int x){
    if(x==1) return 0;
    else return 1;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    int inp[5][5], out[5][5], a, b, i, j;
    fill(out[1], out[1] + 4, 1);
    fill(out[2], out[2] + 4, 1);
    fill(out[3], out[3] + 4, 1);
    fill(out[4], out[4] + 4, 1);
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            cin>>inp[i][j];
            if(inp[i][j]%2 ==1){
                out[i][j]= toggle(out[i][j]);
                out[i+1][j] = toggle(out[i+1][j]);
                out[i][j+1] = toggle(out[i][j+1]);
                out[i-1][j] = toggle(out[i-1][j]);
                out[i][j-1] = toggle(out[i][j-1]);
            }
        }
    }
    for (i = 1; i <= 3; i++){
        for (j = 1; j <= 3; j++){
            cout<<out[i][j];  
        }
        cout<<"\n";
    }
    return 0;
}
