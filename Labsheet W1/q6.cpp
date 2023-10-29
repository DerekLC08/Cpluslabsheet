#include <iostream>

using namespace std;

int main()
{   float h1, h2, r1, r2, r, h;
    float pi = 3.142

    cout << "Please enter the height of the cylinder" << endl;
    cin >> h;
    cout << "Please enter the radius of the cylinder" << endl;
    cin >> r;
    cout << "Please enter the height h1" << endl;
    cin >> h1;
    cout << "Please enter the radius  r1" << endl;
    cin >> r1;
    cout << "Please enter the height h2" << endl;
    cin >> h2;
    cout << "Please enter the radius r2" << endl;
    cin >> r2;

    cout << "The volume of concrete required to build the cylinder is: " << pi * r^2 * h - (pi * r1^2 * h1 + pi * r2^2 *h2) << endl;
    return 0;
}
