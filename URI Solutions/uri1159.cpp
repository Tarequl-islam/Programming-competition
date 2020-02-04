#include <iostream>
using namespace std;
int main() {
    while(true){
      int x, y=0, sum=0;
      cin>>x;
      if(x==0) break;
      while(true){
        if(x%2== 0){
            sum+=x;
            y++;
            if(y>=5) break;
        }
        x++;
      }
      cout<<sum<<endl;
  }
  return 0;
}
