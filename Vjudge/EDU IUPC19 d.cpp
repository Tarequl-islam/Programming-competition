#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    char str[1000];
    int arr[10000], temp=0,n,m;
    cin>>n;
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    cin>>m;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == m){
                if(arr[i]<=arr[j]) cout<<"Peter should buy books whose prices are "<<arr[i]<<" and "<<arr[j]<<".\n";
                else cout<<"Peter should buy books whose prices are "<<arr[j]<<" and "<<arr[i]<<".\n";
                return 0;
            }
        }
    }
    return 0;
}
/*
#include <string>
#include <cstdlib>
#include <iostream>
#include <algorithm>
int cnt[256];
using namespace std;
int main(){
    string word;
    cin >> word;
    for (int i = 0; i < word.size(); ++i)
        ++cnt[word[i]];
    int ans = cnt['i'];
    ans = min(ans, cnt['t']);
    ans = min(ans, (cnt['n'] - 1) / 2);
    ans = min(ans, cnt['e'] / 3);
    cout << ans << endl;
    return EXIT_SUCCESS;
}
*/

    /* vector<int> vec;
    vector<int>:: iterator it;
    for(int i=5;i>0; --i) vec.push_back(i);
    it=vec.begin();
    for(int i=0;i<5; i++){
        cout<<vec[i]<<"\t";
    }

    cout<<endl;
    sort(vec.begin(), vec.end());
    for(it=vec.begin(); it!=vec.end(); it++){
        cout<<*it<<"\t";
    }
    */

