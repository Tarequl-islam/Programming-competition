#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x, y, z, a, b, c;
    cin>>a>>b>>c;
    if(a<b){
        if(a<c){
            x=a;
            if(b<c){
                y=b;
                z=c;
            }
            else {
                y=c;
                z=b;
            }
        }
        else{
            x=c;
            y=a;
            z=b;
        }
    }
    else if(b<c){
        x=b;
        if(a<c){
            y=a;
            z=c;
        }
        else{
            y=c;
            z=a;
        }
    }
    else {
        x=c;
        y=b;
        z=a;
    }
    cout<<x<<endl<<y<<endl<<z<<endl<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}

