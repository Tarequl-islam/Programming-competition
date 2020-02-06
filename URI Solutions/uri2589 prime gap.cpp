#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
void Sieve(int n){
    vector<bool> prime(n+1, true );
    //bool prime[n+1];
    //memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
       if (prime[p])
          primes.push_back(p);
}
int main() {
    int x;
    while(1){//scanf("%d", &x) != EOF){
        int temp=0;
        cin>>x;
        Sieve(x);
        for (int p=0; primes[p+1]<=x; p++){
            if( (primes[p+1]-primes[p]) > temp){
                temp = (primes[p+1]-primes[p]);
            }
            //cout<<primes[p]<<" ";
        }
        cout<<temp<<endl;
    }
    return 0;
}
