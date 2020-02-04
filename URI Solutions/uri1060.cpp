#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int j=0;
    float n, m=0;
    for(int i=0; i<=5; i++){
        cin>>n;
        if(n>0){
            j++;
            m+=n;
        }
    }
    cout<<j<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<m/j<<endl;
    return 0;
}
