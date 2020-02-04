#include<iostream>
using namespace std;
class Fibo{
    public:
    void Fibonacchi(int n){
        int t1=0, t2=1, Next=0;
        cout<<t1<<" "<<t2<<" ";
        Next=t1+t2;
        while(Next<=n){
            cout<<Next<<" ";
            t1=t2;
            t2=Next;
            Next=t1+t2;
        }
    }
};
int main(){
    int n;
    Fibo a;
    cin>>n;
    a.Fibonacchi(n);
    return 0;
}


