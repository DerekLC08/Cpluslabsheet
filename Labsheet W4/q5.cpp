#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int y;
  float s;

  cout << "Please enter the number of years of service and the salary of the employee" << endl;
  cin >> y >> s;

  if ((s < 5000) || (s > 100000)){
    cout << "Error: Invalid salary" << endl;
    return -1;
  }

  if (s >= 75000)
    cout << "You are eligible for a 2000cc car and an optional car allowance of Rs 10000" << endl;
  else if (s >= 60000)
    cout << "You are eligible for a 1800cc car and an optional car allowance of Rs 8000" << endl;
  else if ((s >= 50000) && (y >= 10))
    cout << "You are eligible for a 1800cc car and an optional car allowance of Rs 8000" << endl;
  else if (s >= 50000)
    cout << "You are eligible for a 1600cc car and an optional car allowance of Rs 6000" << endl;
  else if ((s >= 40000) && (y >= 20))
    cout << "You are eligible for a 1500cc car and an optional car allowance of Rs 5000" << endl;
  else if ((s >= 30000) && (y >= 25))
    cout << "You are eligible for a 1400cc car and an optional car allowance of Rs 4000" << endl;
  else
    cout << "You are not eligible for a free car"
return 0;
}
