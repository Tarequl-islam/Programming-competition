#include<iostream>
using namespace std;
int main(){
    long long n, s;
    cin>>n>>s;
    if(s<=n) cout<<"1\n";
    else if(s%n==0) cout<<s/n<<"\n";
    else if(s>n) cout<<s/n+1<<"\n";
    return 0;
}
