#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int count_number(char num[]){
    int len, i=0, count=0;
    len= strlen(num);
    while(i<len){
        if(num[i]==' '){
            while(num[i]==' '){
                i++;
            }
            count++;
        }
        else {
            i++;
        }
    }
    return count+1;
}
int main(){
    int T, i, count;
    char num[100];
    cin>>T;
    while(T--){
        gets(num);
        //scanf(" %[^\n]", &num);
        count = count_number(num);
        cout<<count<<endl;
    }
    return 0;
}
