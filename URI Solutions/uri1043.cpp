#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, s, Perimetro, area;

    cin >> a >> b >> c;

    if ((pow(a,2) == pow(b,2) * pow(c,2)) || (pow(b,2) == pow(a,2) * pow(c,2)) || (pow(c,2) == pow(a,2) * pow(b,2))){
        s=(a+b+c)/2;
        Perimetro=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<Perimetro<<endl;
    }
    else{
        area= 0.5 * (a + b) * c;
        cout<<fixed<<setprecision(1)<<"Area = "<<area<<endl;
    }
    return 0;
}
