#include <iostream>
#include <iomanip>
using namespace std;

int main() {


    double MEDIA, a, b, c;
    cin>>a>>b>>c;
    MEDIA = ((a*2)+(b*3)+(c*5))/(2+3+5);
    cout<<fixed<<setprecision(1)<<"MEDIA = "<<MEDIA<<endl;
    return 0;

}
