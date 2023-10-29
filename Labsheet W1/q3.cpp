#include <iostream>

using namespace std;

int main()
{   string id;
    int sub1;
    int sub2;

    cout << "Please enter the ID number of the student" << endl;
    cin >> id;
    cout << "Enter the score in CSE1017Y" << endl;
    cin >> sub1;
    cout << "Enter the score in CSE1019Y" << endl;
    cin >> sub2;

    cout << "ID: " << id << endl;
    cout << "Score in CSE1017Y: " << sub1 << endl;
    cout << "Score in CSE1019Y: " << sub2 << endl;
    cout << "AVERAGE SCORE: " << (sub1 + sub2) / 2 << endl;

    return 0;
}
