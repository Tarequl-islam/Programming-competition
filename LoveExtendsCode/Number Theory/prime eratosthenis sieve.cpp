#include<bits/stdc++.h>
#define M 1000000
using namespace std;
bool marked[M];

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}

void sieve(int n) {
  for (int i = 3; i * i <= n; i += 2) {
    if (marked[i] == false) { // i is a prime
      for (int j = i * i; j <= n; j += i + i) {
        marked[j] = true;
      }
    }
  }
}
int main(){
    int n;
    cin>>n;
    sieve(n);
    if(isPrime(n)) cout<<n<<" is a prime number!"<<endl;
    else cout<<n<<" is not a prime number!"<<endl;
    return 0;
}
