#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
int List[128];
int listSize;
void Sieve(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++){
        if (prime[p] == true){
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
       if (prime[p])
          primes.push_back(p);
}
void primeFact(int n){
    listSize=0;
    for(int i=0; primes[i]*primes[i] <= n; i++){
        if(n%primes[i]==0){
            while(n%primes[i]==0){
                n/=primes[i];
                List[listSize]=primes[i];
                listSize++;
            }
        }
    }
    if(n>1){
        List[listSize]=n;
        listSize++;
    }
}
int main() {
    int x;
    cin>>x;
    Sieve(x);
    primeFact(x);
    for (int p=0; p<listSize; p++)
       cout<<List[p]<<" ";
    return 0;
}
