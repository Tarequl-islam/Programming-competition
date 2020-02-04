#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;
    if(y%x==0){
        cout<<"Sao Multiplos"<<endl;
    }
    else if(x%y==0){
        cout<<"Sao Multiplos"<<endl;
    }
    else cout<<"Nao sao Multiplos"<<endl;
    return 0;
}
