#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double a, b, c, t;
    cin>>a>>b>>c;
    if(((b * b) - 4 * a * c) < 0 || a == 0){
        cout<<"Impossivel calcular"<<endl;
    }
    else{
        t = sqrt((b * b) - 4 * a * c);
        cout<<fixed<<setprecision(5)<<"R1 = "<<((-b + t) / (2 * a))<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<((-b - t) / (2 * a))<<endl;
    }
    return 0;
}
