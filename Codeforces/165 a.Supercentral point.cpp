#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, a, b, c, ri, le, lo, up, cnt=0;
    int ar[202], br[202];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>ar[i]>>br[i];
    }
    for (int i = 0; i < n; i++){
        a = ar[i];
        b = br[i];
        ri = le = lo = up = 0;
        for (int j = 0; j < n; j++){
            if (ar[j]>a && br[j] == b){
                ri = 1;
            }
            if (ar[j]<a && br[j] == b){
                le = 1;
            }
            if (ar[j] == a && br[j] < b){
                lo = 1;
            }
            if (ar[j] == a && br[j] > b){
                up = 1;
            }
        }
        if (ri == 1 && le == 1 && lo == 1 && up == 1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
