#include<iostream>
using namespace std;
class MyClass{
    int a, b;
    public:
    friend int Sum(MyClass x);
    void Set(int i, int j);
};
void MyClass::Set(int i, int j){
    a=i;
    b=j;
}
int Sum(MyClass x){
    return x.a+x.b;
}
inline int Max(int a, int b){
    return a>b? a:b;
}
int main(){
    MyClass n;
    n.Set(3,4);
    cout<<Sum(n)<<endl;
    cout<<Max(10,20)<<endl;
    return 0;
}
