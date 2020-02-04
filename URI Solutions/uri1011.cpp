#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double VOLUME, pi;
    int R;
    cin>>R;
    pi = 3.14159;
    VOLUME = (4.0/3) * pi * R * R * R;
    cout<<fixed<<setprecision(3)<<"VOLUME = "<<VOLUME<<endl;
    return 0;

}
