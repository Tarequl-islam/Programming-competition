#include<iostream>
using namespace std;
int main(){
    int n,m, sum=0;
    cin>>n;
    int t1=0, t2=1, Next=0, step=2;
    if(n==0){
        cout<<t1<<endl;
    }
    else if(n==1){
        cout<<t1<<" "<<t2<<endl;
    }
    else if(n>=2){
        cout<<t1<<" "<<t2<<" ";
        Next=t1+t2;
        while(1){
            cout<<Next;
            t1=t2;
            t2=Next;
            Next=t1+t2;
            if(step==n){
                cout<<endl;
                break;
            }
            cout<<" ";
            step++;
        }
    }
    return 0;
}

