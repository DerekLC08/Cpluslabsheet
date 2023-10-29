//Program to calculate the distance between 2 points

#include <iostream>
#include <cmath>

using namespace std;

int main()
{   float x1, x2, y1, y2, d;

    cout << "Enter the first set of coordinates(x,y)" << endl;
    cin >> x1 >> y1 ;

    cout << "Enter the second set of coordinates (x,y)" << endl;
    cin >> x2 >> y2 ;

    d = sqrt(pow(x2-x1, 2) - pow(y2-y1, 2));

    cout << "The distance between the coordinates is " << d << endl;

    return 0;
}
