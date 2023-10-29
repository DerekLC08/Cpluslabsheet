#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int x, c, o;
  c = 1;

  cout << "Please enter number for factorial: " ;
  cin >> x;

   o = x;

    while(x > 0){
        c = c * x;
        x --;
    }

    cout << o << " ! is " << c << endl;

return 0;
}
