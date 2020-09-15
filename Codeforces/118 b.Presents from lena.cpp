#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, c, cnt=0;
    int ar[30] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    cin>>n;
    ar[n]=0;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j < (n+1)*2; j++){
            if (ar[j]>=0){
                cout<<ar[j];
                ar[j]++;
                if (ar[j+1]==-1) break;
                cout<<" ";
            }
            else cout<<"  ";            
        }
        cout<<endl;
        for (int j = 1; j < (n+1)*2; j++){
            if (ar[j] == 1 && ar[j - 1] == -1)
                ar[j - 1]++;
            if (ar[j] == 1 && ar[j + 1] == -1){
                ar[j + 1]++;
                j++;
            }
        }
    }
    for (int j = 0; j < (n+1)*2; j++) ar[j]--;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < (n+1)*2; j++){
            if (ar[j]>=1){
                ar[j]--;
                cout<<ar[j];
                if (ar[j + 1] == 0)
                    break;
                cout<<" ";
            }
            else cout<<"  ";            
        }
        cout<<endl;
    }
    return 0;
}
