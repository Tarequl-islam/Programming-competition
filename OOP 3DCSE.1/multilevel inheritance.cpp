#include<iostream>
#include<stdio.h>
using namespace std;
class person{
    char name[100];
    public:
    void getdata(){
        cout<<"name: ";
        gets(name);
    }
    void display(){
        cout<<"Name : "<<name<<endl;
    }
};
class employee: public person{
    char company[50];
    float salary;
    public:
    void getdata(){
        person::getdata();
        cout<<"Name of company: and salary:";
        gets(company);
        cin>>salary;
    }
    void display(){
        person::display();
        cout<<"Name of company: "<<company<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};
class programmer: public employee{
    int number;
    public:
    void getdata(){
        employee::getdata();
        cout<<"Number of programming language known: ";
        cin>>number;
    }
    void display(){
        employee::display();
        cout<<"Number of programming language known: "<<number;
    }
};
int main(){
    programmer p;
    cout<<"Enter data: "<<endl;
    p.getdata();
    p.display();
    return 0;
}
