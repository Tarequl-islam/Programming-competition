#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double money, n;
    int hundred;
    cin>>money;
    cout<<"NOTAS:"<<endl;
    if(money>= 100){
        hundred = money/100;
        money = money - (hundred*100);
        cout<<hundred<<" nota(s) de R$ 100.00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 100.00"<<endl;
    if(money>= 50){
        hundred = money/50;
        money = money - (hundred*50);
        cout<<hundred<<" nota(s) de R$ 50.00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 50.00"<<endl;
    if(money>= 20){
        hundred = money/20;
        money = money - (hundred*20);
        cout<<hundred<<" nota(s) de R$ 20.00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 20.00"<<endl;
    if(money>= 10){
        hundred = money/10;
        money = money - (hundred*10);
        cout<<hundred<<" nota(s) de R$ 10.00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 10.00"<<endl;
    if(money>= 5){
        hundred = money/5;
        money = money - (hundred*5);
        cout<<hundred<<" nota(s) de R$ 5.00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 5.00"<<endl;
    if(money>= 2){
        hundred = money/2;
        money = money - (hundred*2);
        cout<<hundred<<" nota(s) de R$ 2.00"<<endl;
    }
    else cout<<"0 nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;
    if(money>= 1){
        hundred = money/1;
        money = money - (hundred*1);
        cout<<hundred<<" moeda(s) de R$ 1.00"<<endl;
    }
    else cout<<"0 moeda(s) de R$ 1.00"<<endl;
    if(money>= 0.50){
        hundred = money/0.50;
        money = money - (hundred*0.50);
        cout<<hundred<<" moeda(s) de R$ 0.50"<<endl;
    }
    else cout<<"0 moeda(s) de R$ 0.50"<<endl;
    if(money>= 0.25){
        hundred = money/0.25;
        money = money - (hundred*0.25);
        cout<<hundred<<" moeda(s) de R$ 0.25"<<endl;
    }
    else cout<<"0 moeda(s) de R$ 0.25"<<endl;
    if(money>= 0.10){
        hundred = money/0.10;
        money = money - (hundred*0.10);
        cout<<hundred<<" moeda(s) de R$ 0.10"<<endl;
    }
    else cout<<"0 moeda(s) de R$ 0.10"<<endl;
    if(money>= 0.05){
        hundred = money/0.05;
        money = money - (hundred*0.05);
        cout<<hundred<<" moeda(s) de R$ 0.05"<<endl;
    }
    else cout<<"0 moeda(s) de R$ 0.05"<<endl;
    n = money/0.01;
    cout<<n<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}
