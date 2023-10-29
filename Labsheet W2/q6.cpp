#include <iostream>
#include <cmath>

using namespace std;

int main()
{   float x;
    cout << "Please enter the value of x" << endl;
    cin >> x;

    cout << pow(x,5) + 3 * pow(x,4) + 2 * pow(x,3) << endl;
    return 0;
}
