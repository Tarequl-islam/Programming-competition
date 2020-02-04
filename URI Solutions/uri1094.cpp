#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n, amount, total=0, c = 0, r = 0, s = 0;
    float cp, rp, sp;
    char animal;
    cin>>n;
    for(int i=1;i<=n;  i++){
        cin>>amount;
        cin>>animal;
        total+=amount;
        switch(animal){
            case 'C' : c = c + amount;
                        break;
            case 'R' : r = r + amount;
                        break;
            case 'S' : s = s + amount;
                        break;
        }
    }
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<c*(100.00/total)<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<r*(100.00/total)<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<s*(100.00/total)<<" %"<<endl;
    return 0;
}
