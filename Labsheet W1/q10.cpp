#include <iostream>

using namespace std;

int main()
{   float r1, r2;
    cout << "Please enter the radius of the bigger ball" << endl;
    cin >> r1;
    cout << "Please enter the radius of the ball inside" << endl;
    cin >> r2;
    cout << "The volume of the liquid inside the ball is " << 4/3*3.142*(r1*r1*r1 -r2*r2*r2) << endl;
    return 0;
}
