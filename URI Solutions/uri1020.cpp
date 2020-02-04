#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    int day, month, year;
    cin>>day;
    if(day>= 365){
        year = day/365;
        day = day - (year*365);
        cout<<year<<" ano(s)"<<endl;
    }
    else cout<<"0 ano(s)"<<endl;
    if(day>= 30){
        month = day/30;
        day = day - (month*30);
        cout<<month<<" mes(es)"<<endl;
    }
    else cout<<"0 mes(es)"<<endl;
    cout<<day<<" dia(s)"<<endl;
    return 0;
}
