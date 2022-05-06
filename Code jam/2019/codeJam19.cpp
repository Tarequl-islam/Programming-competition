#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;
int main()
{
    ll t, j;
    cin >> t;
    for (j = 1; j <= t; j++)
    {
        ll n, a=0, b=0, temp=0, al,bl;
        bool loop=true;
        cin>>n;
        while(loop){
            a = (n/2)-temp;
            b = n-a;
            al=a;
            bl=b;
            int an, bn;
            for(int k=0; k<=1000000; k++){
                if(a < 10 || b < 10){
                    if(a!=4 && b!=4){
                        cout<<"Case #"<<j<<": "<<al<<" "<<bl<<endl;
                        loop=false;
                        break;
                    }
                    if(a==4 || b==4){
                        temp = pow(10,k);
                        break;
                    }
                }
                an= a%10;
                bn= b%10;
                if(an==4 || bn==4){
                    temp = pow(10,k);
                    break;
                }
                a=a/10;
                b=b/10;
            }
        }
    }
    return 0;
}
