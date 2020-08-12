#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n, a;
    while (1){
        cin>>n;
        if (n == 0) break;
        for (i = 1; i <= n; i++){
            for (j = 1; j <= n; j++){
                a = i;
                if (j < a) a = j;
                if (n - i + 1 < a) a = n - i + 1;
                if (n - j + 1 < a) a = n - j + 1;
                printf("%3d", a);
                if (j < n) cout<<" ";
                else cout<<"\n";
            }
        }
        cout<<"\n";
    }
    return 0;
}