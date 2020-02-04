#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    while(1)
    {
        char ch[3] = {'a', 'b'};
        int guess_num, random_num;
        cout <<"Enter Your Number 1 to 5: " <<endl;

        cin >> guess_num;
        if(guess_num >= 6)
        {
            cout << "Sorry! You are Entered Wrong Number."<<endl;
        }
        else if(guess_num == ch[0])
        {
            cout << "Sorry! You are Entered Wrong Key."<<endl;
        }
    }

    return 0;
}
