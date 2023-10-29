#include <iostream>

using namespace std;

int main()

{   int s,e,t,b;
    cout << "Please enter the starting time" << endl;
    cin >> s;
    cout << "Please enter the ending time" << endl;
    cin >> e;

    t = e - s

    if (e > 21)
    {
        b = (e - 21) * 175;
        b = b + (21 - s) * 250;
    }

    else
        b = (e - s) * 250;

    cout << "The baby sitting bill is " << b <, endl;
    return 0;
}
