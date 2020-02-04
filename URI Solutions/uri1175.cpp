#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a[20];
    for(int i=19; i>=0; i--){
        cin>>a[i];
    }
    for(int j=0; j<20; j++){
        cout<<"N["<<j<<"] = "<<a[j]<<endl;
    }
    return 0;
}
