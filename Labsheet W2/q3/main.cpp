#include <iostream>
#include <cmath>

using namespace std;

int main()
{   float o,a,h;
    cout << "Enter the length of the opposite" << endl;
    cin >> o;
    cout << "Enter the length of the adjacent" << endl;
    cin >> a;

    h = sqrt(o*o + a*a)

    cout << "The length of the hypotenuse is " << h << endl;

    return 0;
}
