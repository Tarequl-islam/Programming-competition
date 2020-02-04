#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int sdate, edate, a, b, c, d, ss, es, day, hour, minute,second;
    string s;
    cin>>s>>sdate;
    cin>>a>>s>>c>>s>>ss;
    cin>>s>>edate;
    cin>>b>>s>>d>>s>>es;
    day=edate-sdate;
    if(a>b){
        day=day-1;
        if(c>d){
            hour =(24-a)+(b-1);
            minute=(60-c)+d;
        }
        else {
            hour =(24-a)+b;
            minute = d-c;
        }
    }
    else if(a==b){
        if(c==d){
            hour =(24-a)+(b);
            minute=c-d;
        }
        else if(c<d){
            hour =a-b;
            minute = d-c;
        }
        else {
            hour =(24-a)+(b-1);
            minute=(60-c)+d;
        }
    }
    else{
        if(c<d){
            hour =b-a;
            minute=d-c;
        }
        else {
            hour =(b-1)-a;
            minute=(60-c)+d;
        }
    }
    if(ss>es){
        minute=minute-1;
        second=(60-ss)+es;
    }
    else second=es-ss;
    cout<<day<<" dia(s)"<<endl;
    cout<<hour<<" hora(s)"<<endl;
    cout<<minute<<" minuto(s)"<<endl;
    cout<<second<<" segundo(s)"<<endl;
    return 0;
}
