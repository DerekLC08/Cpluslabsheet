//Program to display area of circle
#include <iostream>

using namespace std;

int main()
{   float r, a;
    cout << "Please enter the radius of circle" << endl;
    cin >> r;

    if (r > 0)
    {
        a = 3.142 * r * r;
        cout << "The area of the circle is " << a << endl;
    }
    else
        cout << "Invalid value of r" << endl;
    return 0;
}
