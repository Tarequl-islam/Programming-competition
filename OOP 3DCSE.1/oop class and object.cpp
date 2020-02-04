#include<iostream>
using namespace std;

class Geeks{
    public:
    string geekName;

    void printName(){
        cout<<"Geek Name is: "<<geekName<<endl;
    }
};

int main(){
    Geeks obj1;
    obj1.geekName = "Abhi";
    obj1.printName();
    return 0;
}
