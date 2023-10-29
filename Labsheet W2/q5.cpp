#include <iostream>
#include <cmath>

using namespace std;

int main()
{   float h, o, a, an;
    cout << "Please enter the height of the ladder" << endl;
    cin >> h;

    cout << "Please enter the inclination from the ground(in degrees)" << endl;
    cin >> an;

    o = h * sin(2*3.142*an/360);
    cout << "The maximum height of the wall is " << o << endl;
    return 0;
}
