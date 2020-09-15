#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, c;
    string ar[100];
    cin>>n>>m;
    for (int i = 0; i < n; i++){
        cin>>ar[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (ar[i][j]=='.'){
                if(i%2==0){
                    if(j%2==0)
                        ar[i][j]='B';
                    else ar[i][j]='W';
                }
                else{
                    if(j%2==0)
                        ar[i][j]='W';
                    else ar[i][j]='B';
                }
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout<<ar[i]<<endl;
    }
    return 0;
}
