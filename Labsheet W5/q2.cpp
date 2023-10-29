#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int x = 0;
  int t = 0;

  while(x <= 100){
  t += x; //Saves the previous value of x and adds to the current value
  x += 5; //Increments to get the next value of x
  }

    cout << t;

return 0;
}
