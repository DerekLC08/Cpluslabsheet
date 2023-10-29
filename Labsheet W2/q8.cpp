#include <iostream>
#include <cmath>

using namespace std;

int main()
{   float a,b,c,A,area;
    cout << "Please enter the two lengths of the triangle" << endl;
    cin >> b >> c;

    cout << "Please enter the angle between the two lengths" << endl;
    cin >> A;

    a = sqrt(b*b + c*c - 2*b*c*cos(A));
    area = 0.5*b*c*sin(A);

    cout << "The third length is " << a << "and the area of the triangle is " << area << endl;

    return 0;
}
