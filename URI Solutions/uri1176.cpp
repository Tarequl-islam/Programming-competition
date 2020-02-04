#include<iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){

    int n;
    cin>>n;
    ll t1=0, t2=1, Next=0, step=2;
    if(n==0){
        cout<<"Fib("<<n<<") = "<<t1<<endl;
    }
    else if(n==1){
        cout<<"Fib("<<n<<") = "<<t2<<endl;
    }
    else if(n>=2){
        Next=t1+t2;
        while(1){
            if(step==n){
                cout<<"Fib("<<n<<") = "<<Next<<endl;
                break;
            }
            t1=t2;
            t2=Next;
            Next=t1+t2;
            step++;
        }
    }

    }
    return 0;
}
