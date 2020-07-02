#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    int matx[6][6], r, c, a, b, i, j;
    for (i = 1; i <=5; i++)
    {
        for (j = 1; j <= 5; j++){
            cin >> matx[i][j];
            if(matx[i][j]==1){ 
                r=i;
                c=j;
            }
        }
    }
    a= r-3;
    b= c-3;
    cout << abs(a) + abs(b) <<"\n";
    return 0;
}
