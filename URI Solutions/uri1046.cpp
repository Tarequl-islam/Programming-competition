#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c, d, hour, minute;
    cin>>a>>c>>b>>d;
    if(a>b){
        if(c>d){
            hour =(24-a)+(b-1);
            minute=(60-c)+d;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
        }
        else {
            hour =(24-a)+b;
            minute = d-c;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
        }
    }
    else if(a==b){
        if(c==d){
            hour =(24-a)+(b);
            minute=c-d;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
        }
        else if(c<d){
            hour =a-b;
            minute = d-c;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
        }
        else {
            hour =(24-a)+(b-1);
            minute=(60-c)+d;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
        }
    }
    else{
        if(c<d){
            hour =b-a;
            minute=d-c;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
        }
        else {
            hour =(b-1)-a;
            minute=(60-c)+d;
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
        }
    }
    return 0;
}
