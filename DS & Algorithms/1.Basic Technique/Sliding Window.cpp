#include<bits/stdc++.h>
using namespace std;
/*  Problem:
    Given an array of integers N and a possitive number K,
    Find the maximum sum of any contiguous subarray of size K.
*/
int main(){
    int n, k, i, mxSum=0, sum=0;
    int ar[100005];
    cin>>n>>k;
    for (i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < k; i++){
        sum+=ar[i];
    }
    for (i = k; i < n; i++){
        sum += ar[i]-ar[i-k];
        mxSum = max(sum, mxSum);
    }
    cout <<mxSum<< endl;
    return 0;
}
