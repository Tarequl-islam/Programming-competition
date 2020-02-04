#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n[1000], i, sum=0, step=0;

    for(i=1; i<=10000; i++){
        cin>>n[i];
        if(n[i]<0){
            break;
        }
        sum+=n[i];
        step++;

    }
    cout<<fixed<<setprecision(2)<<(float)sum/step<<endl;
    return 0;
}
