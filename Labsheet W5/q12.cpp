#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{ float P, r, d;
  int n = 0;

  cout << "Please enter the amount P and the rate r " << endl;
  cin >> P >> r;

  d = P * 2;

  while(d > P){
        P = P *(1 + r);
        n ++;

  }

  cout << "The number of years it would take for the investment to double is " << n << endl;

return 0;
}
