#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int d;
  float ai, r, t;

  cout << "Please enter your annual income and the number of dependants" << endl;
  cin >> ai >> d;

  switch (d){
    case 0 : r = ai - 25000;

    case 1 : r = ai - 32000;

    case 2 : r = ai - 39000;

    case 3 : r = ai - 45000;
    }

  if r > (120000)
        t = (r - 120000) * 0.25 + 70000 * 0.20 + 50000 * 0.15;
    else if (r > 50000)
        t = (r - 50000) * 0.20 + 50000 * 0.15;
    else if (r > 0)
        t = r * 0.15;
    else
        t = 0;

    cout << "The tax payable is Rs " << t << endl;
return 0;
}
