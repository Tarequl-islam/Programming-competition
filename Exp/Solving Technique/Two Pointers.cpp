#include<bits/stdc++.h>
using namespace std;
/*  Problem:
    Given an array of integers N and a possitive number a,
    Find pair of elements x and y such that their sum is equal to a.
*/
int main(){
    int n, a, x, y, i, j, mxSum=0, sum=0;
    int ar[100005];
    cin>>n>>a;
    for (i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    sort(ar, ar+n);
    i=0; j=n-1;
    while (i<j)    {
        if(ar[i]+ar[j]==a){
            cout<<ar[i]<<" "<<ar[j]<<endl;
            return 0;
        }
        else if(ar[i]+ar[j]<a) i++;
        else j--;
    }
    cout <<"Doesn't Exist"<< endl;
    return 0;
}
