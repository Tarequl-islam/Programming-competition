#include<bits/stdc++.h>
using namespace std;

struct myStruct{
    int roll;
    string name;
    double hight;
};

int main(){
    struct myStruct s;
    s.roll=4;
    s.name="ahid";
    s.hight=5.5;
    cout<<s.roll<<" "<<s.name<<" "<<s.hight<<endl;

    return 0;
}
