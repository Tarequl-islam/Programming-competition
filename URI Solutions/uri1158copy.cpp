#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
      int x,y, sum=0;
      cin>>x>>y;
      while(true){
        if(x%2!= 0){
            sum+=x;
            y--;
            if(y==0) break;
        }
        x++;
      }
      cout<<sum<<endl;
  }
  return 0;
}
