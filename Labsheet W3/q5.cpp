#include <iostream>

using namespace std;

int main()
{   float a,b;
    cout << "Enter the 2 numbers that are not equal" << endl;
    cin >> a >> b;

    if (a>b)
        cout << a << " is larger";
    else
        cout << b << " is larger";
    return 0;
}
