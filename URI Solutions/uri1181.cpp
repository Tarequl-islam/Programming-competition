#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int L;
    char T;
    float M[12][12], Sum=0, Avg=0;
    cin>>L;
    cin>>T;
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin>>M[i][j];
        }
    }
    for(int k=0; k<12; k++){
            Sum+=M[L][k];
        }
    if(T=='S'){
        cout<<fixed<<setprecision(1)<<Sum<<endl;
    }
    if(T=='M'){
        Avg= Sum/12;
        cout<<fixed<<setprecision(1)<<Avg<<endl;
    }
    return 0;
}
