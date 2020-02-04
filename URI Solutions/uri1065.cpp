#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n, j=0;
    for(int i=0; i<=4; i++){
        cin>>n;
        if(n%2==0){
            j++;
        }
    }
    cout<<j<<" valores pares"<<endl;
    return 0;
}
