#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;

int main()
{
    int n, j;
    cin >> n;
    for (j = 1; j <= n; j++)
    {
        ll i, t1 = 0, t2 = 1, term, fth = 1, nextTerm = 0;
        cin>>term;
        if(term==1){
            cout<<fth<<endl;
        }
        else{
            for (i = 1; i <= 1000000000; i++)
            {
                nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;
                fth++;
                if((nextTerm/(pow(10, (term-1))))>=1){
                    cout<<fth<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
