#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, c;
    cin>>a;
    if(a<=400.00){
        c = 15 * (a/100);
        b = a + c;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<b<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<c<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(a<=800.00){
        c = 12 * (a/100);
        b = a + c;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<b<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<c<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(a<=1200.00){
        c = 10 * (a/100);
        b = a + c;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<b<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<c<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(a<=2000.00){
        c = 7 * (a/100);
        b = a + c;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<b<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<c<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(a>2000.00){
        c = 4 * (a/100);
        b = a + c;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<b<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<c<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }
    return 0;
}
