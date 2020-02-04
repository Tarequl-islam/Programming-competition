#include<iostream>
using namespace std;
int main(){
    int n, m=1;
    cin>>n;
        for(int i=1; i<=1000000; i++){
            if(i%4==0){
                cout<<"PUM"<<endl;
                if(m==n){
                    break;
                }
                m++;

            }
            else cout<<i<<" ";
        }
    return 0;
}
