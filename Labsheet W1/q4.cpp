#include <iostream>

using namespace std;

int main()
{
    float d1, d2, d3;
    float s1, s2, s3;

    cout << "Please enter the first distance traveled" << endl;
    cin >> d1;
    cout << "Please enter the speed during this distance" << endl;
    cin >> s1;
    cout << "Please enter the first distance traveled" << endl;
    cin >> d2;
    cout << "Please enter the speed during this distance" << endl;
    cin >> s2;
    cout << "Please enter the first distance traveled" << endl;
    cin >> d3;
    cout << "Please enter the speed during this distanc" << endl;
    cin >> s3;

    cout << "The total distance traveled is: " << d1 + d2 + d3 << endl;
    cout << "The time taken for the whole journey is: " << d1 / s1 + d2 / s2 + s3 / d3 << endl;
    cout << "The average speed for the whole journey is: "  << (s1 + s2 + s3) / 3 << endl;

    return 0;
}
