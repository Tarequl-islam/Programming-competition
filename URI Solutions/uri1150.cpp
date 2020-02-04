#include<iostream>
using namespace std;
int main(){
    int n,m, sum=0;
    cin>>n>>m;
    for(int i=1; i<=100000; i++)
    {
        if(n<m){
            for(int j=1; j<=100000; j++){
                 sum= n+sum;
                 if(sum>m){
                     cout<<j<<endl;
                     break;
                 }
                 n++;
            }
            break;
        }
        cin>>m;
    }
    return 0;
}
