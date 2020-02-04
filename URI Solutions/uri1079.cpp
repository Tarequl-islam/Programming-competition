#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    float a[1000], b[1000], c[1000], d[1000];
    for(int i=1;i<=n;  i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int j=1;j<=n;  j++){
        d[j]=((a[j]*2)+(b[j]*3)+(c[j]*5))/(2+3+5);
        cout<<fixed<<setprecision(1)<<d[j]<<endl;
    }
    return 0;
}
