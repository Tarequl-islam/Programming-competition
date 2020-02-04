#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double liter, speed, time;
    cin>>time>>speed;
    liter = (time*speed) / 12;
    cout<<fixed<<setprecision(3)<<liter<<endl;
    return 0;
}


