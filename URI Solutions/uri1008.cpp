#include <iostream>
#include <iomanip>
using namespace std;

int main() {


    double SALARY, amount;
    int NUMBER, hour;
    cin>>NUMBER>>hour>>amount;
    SALARY = hour * amount;
    cout<<"NUMBER = "<<NUMBER<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<SALARY<<endl;
    return 0;

}

