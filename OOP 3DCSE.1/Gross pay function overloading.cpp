#include<iostream>
using namespace std;
class Salary{
    public:
    void Payment(int basic, int hra, int da){
        int regularEmployee = basic+hra+(da/100.00)*basic;
        cout<<"Total salary of regular: "<<regularEmployee<<endl;
    }
    void Payment(int wph, int hour){
        int dailyEmployee = wph*hour;
        cout<<"Total salary of daily: "<<dailyEmployee<<endl;
    }
    void Payment(int amount){
        int consolidated = amount;
        cout<<"Total salary of consolidated: "<<consolidated<<endl;
    }
};
int main(){
    Salary s;
    s.Payment(10000, 1000, 15);
    s.Payment(10, 15);
    s.Payment(12000);
    return 0;
}
