#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>m>>n;
        for(int i=1; i<=n; i++){
            cout<<i<<" ";
            if(i%m==0){
                if(i!=n){
                    cout<<endl;
                }
            }
        }
    cout<<endl;
    return 0;
}
