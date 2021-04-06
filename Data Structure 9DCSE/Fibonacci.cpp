#include<bits/stdc++.h>
using namespace std;

void fibonacci(int a, int b, int n){
    if(n<=0) return;
    cout<<a<<" ";
    int c = a+b;
    a = b;
    b = c;
    fibonacci(a, b, n-1);
}

int main(){
    cout<<"Enter the limit: ";
    int n;
    cin >> n;
    fibonacci(0, 1, n);
    return 0; 
}
