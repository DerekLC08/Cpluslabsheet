#include <iostream>
#include <cmath>

using namespace std;

int main()
{   float x,n;
    cout << "Please enter the value of x and n" << endl;
    cin >> x >> n;

    cout << pow(x,n) + 3 * pow(x,n-1) + 2 * pow(x,n-2) << endl;
    return 0;
}
