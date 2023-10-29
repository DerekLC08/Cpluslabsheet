#include <iostream>
#include <cmath>
using namespace std;

int main()
{   float x1, x2, y1, y2, m, d;
    y1 = 5;
    y2 = 12;
    cout << "Please enter the value for x1" << endl;
    cin >> x1;
    cout << "Please enter the value for x2" << endl;
    cin >> x2;

    m = (y2-y1)/(x2-x1);
    d = pow(pow(y2-y1,2)+pow(x2-x1,2),0.5);
    cout << "The slope of the line is " << m << endl;
    cout << "The distance of the line is " << d << endl;

    return 0;
}
