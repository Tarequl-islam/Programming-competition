#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+n;
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
