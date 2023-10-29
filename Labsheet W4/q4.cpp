#include <iostream>
#include <cmath>
using namespace std;

int main()
{ char tn;
  float u, t;

  cout << "Please enter the tariff number[a(110) b(120) c(140)] and the number of units consumed in a month" << endl;
  cin >> tn >> u;

  if (u < 0){
    cout << "Error: units consumed cannot be negative" << endl;
    return -1;
  }

  switch (tn){
    case 'a' :
        if (u > 150)
            t = (u - 150) * 6.50 + 75 * 4.00 + 50 * 3.25 + 25 * 2.75;
        else if (u > 75)
            t = (u - 75) * 4.00 + 50 * 3.25 + 25 * 2.75;
        else if (u > 25)
            t = (u - 25) * 3.25 + 25 * 2.75;
        else
            t = u * 2.75;
        if (t < 44.00)
            t = 44.00;
        break;

    case 'b' :
        if (u > 150)
            t = (u - 150) * 6.00 + 75 * 4.25 + 50 * 3.50 + 25 * 3.00;
        else if (u > 75)
            t = (u - 75) * 4.25 + 50 * 3.50 + 25 * 3.00;
        else if (u > 25)
            t = (u - 25) * 3.50 + 25 * 3.00;
        else
            t = u * 3.00;
        if (t < 184.00)
            t = 184.00;
    break;

    case 'c' :
        if (u > 150)
            t = (u - 150) * 5.75 + 75 * 4.50 + 50 * 3.75 + 25 * 3.25;
        else if (u > 75)
            t = (u - 75) * 4.50 + 50 * 3.75 + 25 * 3.25;
        else if (u > 25)
            t = (u - 25) * 3.75 + 25 * 3.25;
        else
            t = u * 3.25;
        if (t < 360.00)
            t = 360.00;
    break;
    }

    cout << "The total amount to be paid is Rs " << t << endl;
return 0;
}
