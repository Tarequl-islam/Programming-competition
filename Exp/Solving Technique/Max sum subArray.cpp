#include<bits/stdc++.h>
using namespace std;
/*  Problem:
    Given an array of integers N including positive and negetive numbers,
    Find the maximum sum subarray in this Array.
    CF/327/A.Flipping Game
*/
int main(){
    int n, i, mxSum=0, sum=0;
    int ar[100005];
    cin>>n;
    for (i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++){
        if (sum+ar[i]>0)
            sum+=ar[i];
        else
            sum=0;
        mxSum = max(mxSum, sum);
    }
    cout <<mxSum<< endl;
    return 0;
}
