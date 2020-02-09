#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b){
    if(b==0) return a;
    else return GCD(b, a%b);
}
int LCM(int a, int b){
    return a*b/GCD(a,b);
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<"GCD of a and b is: "<<GCD(a,b)<<endl;
    cout<<"LCM of a and b is: "<<LCM(a,b)<<endl;
    return 0;
}
