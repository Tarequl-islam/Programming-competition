#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll i, j, n, t1 = 0, t2 = 1, term, nextTerm = 0;
    cin >> n;
    for (j = 1; j <= n; ++j)
    {
        cin>>term;
        for (i = 1; i <= 10000000000000000000; ++i)
        {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            cout << nextTerm << " ";
            if((nextTerm/(pow(10, (term-1))))>=1){
                cout<<nextTerm<<endl;
            }

        }
    }
    return 0;
}
