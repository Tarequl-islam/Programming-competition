#include<bits/stdc++.h>
using namespace std;
/*  Problem:
    Given an array of integers N and 2 possitive number a and b,
    Find the sum of subarray a to b.
*/
int qsum[100005];
int main(){
    int n, a, b, i, mxSum=0, sum=0;
    int ar[100005];
    cin>>n>>a>>b;
    for (i = 1; i <= n; i++){
        scanf("%d", &ar[i]);
        qsum[i]= qsum[i-1]+ar[i];
    }
    cout <<qsum[b]-qsum[a-1]<< endl;
    return 0;
}
