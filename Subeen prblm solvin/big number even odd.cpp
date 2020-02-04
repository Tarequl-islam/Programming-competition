#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
    int T, i, len, last_num;
    char last_char, num[102];
    cout<<"Enter Test case number: ";
    cin>>T;
    for(i=0; i<T; i++){
        cout<<"Enter a number: ";
        scanf("%c", num);
        len = strlen(num);
        last_char = num[len-1];
        last_num = last_char-'0';
        if(last_num%2==0){
            cout<<"Even"<<endl;
        }
        else cout<<"Odd"<<endl;
    }
    return 0;
}
