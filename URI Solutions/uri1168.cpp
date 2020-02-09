#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    for(int j=0; j<t; j++){
        string a;
        cin>>a;
        //getline(cin,a);
        int n= a.length();
        int sum=0;
        for(int i=0; i<n; i++){
            switch(a[i]){
            case '0':
                sum+=6;
                break;
            case '1':
                sum+=2;
                break;
            case '2':
                sum+=5;
                break;
            case '3':
                sum+=5;
                break;
            case '4':
                sum+=4;
                break;
            case '5':
                sum+=5;
                break;
            case '6':
                sum+=6;
                break;
            case '7':
                sum+=3;
                break;
            case '8':
                sum+=7;
                break;
            case '9':
                sum+=6;
                break;
            }
        }
        cout<<sum<<" leds"<<endl;

    }
    return 0;
}



