#include<iostream>
using namespace std;
class student{
    protected:
    int rno, m1, m2;
    public:
    void get(){
        cout<<"Enter the Roll no: ";
        cin>>rno;
        cout<<"Enter the marks: ";
        cin>>m1>>m2;
    }
};
class sports{
    protected:
    int sm;
    public:
    void getsm(){
        cout<<"\n Enter the sports mark: ";
        cin>>sm;
    }
};
class statement : public student, public sports{
    int tot, avg;
    public:
    void display(){
        tot= (m1+m2+sm);
        avg= tot/3;
        cout<<"\n\nRoll No: "<<rno<<"\nTotal: "<<tot;
        cout<<"\nAverage: "<<avg;
    }
};
int main(){
    statement obj;
    obj.get();
    obj.getsm();
    obj.display();
    return 0;
}
