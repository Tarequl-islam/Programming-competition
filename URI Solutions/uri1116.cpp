#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j=1; j<=n; j++){
        int a, b;
        cin>>a>>b;
        if(b==0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
            cout<<fixed<<setprecision(1)<<(float)a/b<<endl;
        }
    }
    return 0;
}
