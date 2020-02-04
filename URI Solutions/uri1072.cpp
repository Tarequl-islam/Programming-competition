
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    int a, n, in=0, out=0;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        if(a>=10 && a<=20){
        in = in+1;
        }
        else out = out+1;
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;

    return 0;
}
