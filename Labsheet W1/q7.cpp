#include <iostream>

using namespace std;

int main()
{   float h1, h2, r1, r2, r, h;
    float pi = 3.142;
    float v, y, c,cpm3;

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
    v = pi * r*r * h - (pi * r1*r1 * h1 + pi * r2*r2 *h2);
    cout << "The volume of concrete required to build the cylinder is: " << v << endl;

    cout << "Please enter the volume of concrete in the container" << endl;
    cin >> y;
    cout << "Please enter the cost of the container" << endl;
    cin >> c;

    cpm3 = c / y;
    cout << "The cost of a concrete pillar is: " << v * cpm3 << endl;

    return 0;
}
