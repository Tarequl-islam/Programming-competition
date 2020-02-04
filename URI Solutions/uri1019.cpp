#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    int n, hour, minute;
    cin>>n;
    if(n>= 3600){
        hour = n/3600;
        n = n - (hour*3600);
    }
    else hour = 0;
    if(n>= 60){
        minute = n/60;
        n = n - (minute*60);
    }
    else minute = 0;
    cout<<hour<<":"<<minute<<":"<<n<<endl;
    return 0;
}


