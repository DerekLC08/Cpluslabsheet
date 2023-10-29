#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int n, c, x, t;
  c = 0;
  t = 0;
  char e;

  while (true){
    cout << "Enter a value" << endl;
    cin >> x;

    if (x % 2 == 0){
        t += x;
        c ++;
    }

    cout << "Would like to exit? Y/N" << endl;
    cin >> e;

    if (e == 'Y')
        break;

  }

  cout << "The sum of even numbers entered is " << t << " and the number of even numbers is " << c << endl;

return 0;
}
