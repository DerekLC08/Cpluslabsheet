#include <iostream>
#include <cmath>
using namespace std;

int main()
{ float speed;
  int fine = 500;
  cout << "Please enter the speed in km/h" << endl;
  cin >> speed;

  if (speed < 0 || speed > 300)
    cout << "Invalid speed" << endl;
  else if (speed <= 90)
    cout << "The speed limit has not been exceeded" << endl;
  else if (speed > 90){
    fine = fine + (speed - 90) * 10.0;
    cout << "The fine to be paid is Rs " << fine << endl;
  }
return 0;
}
