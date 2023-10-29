#include <iostream>

using namespace std;

int main()
{ float d;
  float p;
  float c;
    cout << "Please enter the diameter of the circle in centimetres" << endl;
    cin >> d;
    cout << "Please enter the price of the plaza" << endl;
    cin >> p;
    c = p / (d*d/4 * 3.142);
    cout << "The cost per centimetre square of the plaza is " << c << endl;
    return 0;
}
