#include <iostream>

using namespace std;

int main()
{   float h, w;
    cout << "Please enter number of hours worked in a week" << endl;
    cin >> h;

    if (h > 40)
        w = h * 150;
    else
        w = h * 100;

        cout << "The wages for that week are Rs" << h << endl;
    return 0;
}
