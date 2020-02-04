#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i=1; i<=100000; i++)
    {
        cin>>n;
        if(n<=0){
            break;
        }
        else{
            for(int j=1; j<=n; j++){
                cout<<j;
                if(j!=n){
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;

}
