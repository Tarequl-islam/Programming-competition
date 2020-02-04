#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    int money, hundred, fifty, twenty, ten, five, two, one;
    cin>>money;
    cout<<money<<endl;
    if(money>= 100){
        hundred = money/100;
        money = money - (hundred*100);
        cout<<hundred<<" nota(s) de R$ 100,00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 100,00"<<endl;
    if(money>= 50){
        hundred = money/50;
        money = money - (hundred*50);
        cout<<hundred<<" nota(s) de R$ 50,00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 50,00"<<endl;
    if(money>= 20){
        hundred = money/20;
        money = money - (hundred*20);
        cout<<hundred<<" nota(s) de R$ 20,00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 20,00"<<endl;
    if(money>= 10){
        hundred = money/10;
        money = money - (hundred*10);
        cout<<hundred<<" nota(s) de R$ 10,00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 10,00"<<endl;
    if(money>= 5){
        hundred = money/5;
        money = money - (hundred*5);
        cout<<hundred<<" nota(s) de R$ 5,00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 5,00"<<endl;
    if(money>= 2){
        hundred = money/2;
        money = money - (hundred*2);
        cout<<hundred<<" nota(s) de R$ 2,00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 2,00"<<endl;
    if(money>= 1){
        hundred = money/1;
        money = money - (hundred*1);
        cout<<hundred<<" nota(s) de R$ 1,00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 1,00"<<endl;

    return 0;
}


