#include <iostream>
#include <iomanip>
using namespace std;

int main() {


    double pr1, pr2, amount;
    int pn1, pn2, pu1, pu2;
    cin>>pn1>>pu1>>pr1;
    cin>>pn2>>pu2>>pr2;
    amount = (pu1 * pr1) + (pu2 * pr2);
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<amount<<endl;
    return 0;

}


