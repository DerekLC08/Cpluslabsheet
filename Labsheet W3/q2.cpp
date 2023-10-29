#include <iostream>

using namespace std;

int main()
{   int by, a, cy ;
    cout << "Please enter the year you were born in" << endl;
    cin >> by;
    cout << "Please enter the current year" << endl;
    cin >> cy;

    a = cy - by;

    if (a < 18)
        cout << "You are a child aged " << a << endl;
    else
        cout << "You an adult aged " << a << endl;
    return 0;
}
