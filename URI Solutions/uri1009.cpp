#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cin>>a;
    if(a<=2000.00){
        cout<<"Isento"<<endl;
    }
    else if(a<=3000.00){
        a-=2000;
        b= a*.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }
    else if(a<=4500.00){
        a-=3000;
        b= a*.18+80;
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }
    else if(a>4500.00){
        a-=4500;
        b= a*.28+350;
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }
    return 0;

}


