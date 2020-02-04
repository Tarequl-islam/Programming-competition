#include <bits/stdc++.h>
#define Phi 1.6180339887498948482
#define nPhi 0.6180339887498948482
#define LogPhi 0.2089876402499787
#define Log5 0.6989700043360187
#define ll long long int
using namespace std;
ll fibValDigitInFib(ll fib){
    ll digits= (fib*LogPhi) - (Log5)/2;
    return digits+1;
}

ll FibInDigitBS(ll digitt){
    ll i, j, m, dig;
    i = 0;
    j=20000;
    while(i<j){
        m = (i+j)/2;
        dig = fibValDigitInFib(m);
        if(dig==digitt){
            return m;
        }
        if(digitt> dig) i = m+1;
        else j = m;
    }
    if(dig==digitt) return i;
    return 0;
}

int main(){
    ll n, j;
    cin >> n;
    for (j = 1; j <= n; j++){
        ll digit, fibonacci, temp, temp2;
        cin>>digit;
        fibonacci = FibInDigitBS(digit);
        temp=fibonacci-1;
        while(true){
            temp2= (temp*LogPhi) - (Log5)/2;
            if(temp2 < digit) break;
            temp--;
        }
        cout<<temp-2<<endl;
    }
    return 0;
}
