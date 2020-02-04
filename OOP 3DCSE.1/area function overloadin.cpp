#include<iostream>
using namespace std;
class MyClass{
    public:
    void Area(int r){
        cout<<"Area of circle: "<<3.1416*r*r<<endl;
    }
    void Area(int h, int w){
        cout<<"Area of Rectangle: "<<h*w<<endl;
    }
};
int main(){
    MyClass s;
    s.Area(15);
    s.Area(12, 15);
    return 0;
}
