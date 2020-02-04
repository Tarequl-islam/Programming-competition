#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(){
        a = 1;
    }
    virtual void show(){
        cout<<a;
    }
};
class B: public A{
    int b;
    public:
    B(){
        b = 2;
    }
    void show(){
        cout<<b;
    }
};

int main(){
    A *pA;
    B oB;
    pA = &oB;
    pA->show();
    return 0;
}
