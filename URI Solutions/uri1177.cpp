#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n, a[1000];
    cin>>n;
    for(int i=0; i<1000; i++){
        for(int j=0; j<n; j++){
            cout<<"N["<<i<<"] = "<<j<<endl;
            if(i==999){
                return 0;
            }
            i++;
        }
        i-=1;
    }
    return 0;
}
