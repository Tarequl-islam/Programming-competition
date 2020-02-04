#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a, n, temp=0;
    cin>>a>>n;
    while(n<=0){
        cin>>n;
    }

    for(int i=a; i<a+n; i++){
        temp = i+temp;
    }
    cout<<temp<<endl;
    return 0;
}

