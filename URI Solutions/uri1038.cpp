#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    double a,b,c;
    cin>>a>>b;
    if(a==1){
        c = b*4.00;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<c<<endl;
    }
    else if(a==2){
        c = b*4.50;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<c<<endl;
    }
    else if(a==3){
        c = b*5.00;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<c<<endl;
    }
    else if(a==4){
        c = b*2.0;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<c<<endl;
    }
    else if(a==5){
        c = b*1.50;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<c<<endl;
    }
    else cout<<"Total: R$ 0.00"<<endl;
    return 0;
}
