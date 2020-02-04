#include <bits/stdc++.h>
int main()
{
    int a,b=0;
    cin>>a;

    while(a>0){
        if(a>=5){
            b=b+1;
            a=a-5;
        }
        else if(a=4){
            b=b+1;
            a=a-4;
        }
        else if(a=3){
            b=b+1;
            a=a-3;
        }
        else if(a=2){
            b=b+1;
            a=a-2;
        }
        else if(a=1){
            b=b+1;
            a=a-1;
        }
    }
    cout<<b<<"\n";
    return 0;
}
