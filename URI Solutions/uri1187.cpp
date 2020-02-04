#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char T;
    float M[12][12], Sum=0, Avg=0, count=0;
    cin>>T;
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin>>M[i][j];
        }
    }
    for(int k=0; k<12; k++){
        for(int l=k+1; l<11-k; l++){
            Sum+=M[k][l];
            count++;
        }
    }
    if(T=='S'){
        cout<<fixed<<setprecision(1)<<Sum<<endl;
    }
    if(T=='M'){
        //Avg= Sum/count;
        cout<<fixed<<setprecision(1)<<Sum/30.0<<endl;
    }
    return 0;
}
