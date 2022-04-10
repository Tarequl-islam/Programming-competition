#include<bits/stdc++.h>
using namespace std;


int main(){ //s: 0.0 am - e: 0.00am;
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, d, i, j, k, mx = 0, mn = 1e18;
        int a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3;
        //ll ar[100005];
        cin>>a1>>b1>>c1>>d1;
        cin>>a2>>b2>>c2>>d2;
        cin>>a3>>b3>>c3>>d3;
        a = min(a1, min(a2, a3));
        b = min(b1, min(b2, b3));
        c = min(c1, min(c2, c3));
        d = min(d1, min(d2, d3));
        if(a+b+c+d < 1000000)
            cout<<"Case #"<<cs++<<": IMPOSSIBLE "<<endl;
        else{
            int rem = (a+b+c+d)-1000000;
            if(rem > a){ 
                rem -= a;
                a = 0;
            }
            else {
                a -= rem;
                rem = 0;
            }
            if(rem > b){ 
                rem -= b;
                b = 0;
            }
            else {
                b -= rem;
                rem = 0;
            }
            if (rem > c)
            {
                rem -= c;
                c = 0;
            }
            else {
                c -= rem;
                rem = 0;
            }
            cout<<"Case #"<<cs++<<": "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
        }
    }
    return 0;
}
