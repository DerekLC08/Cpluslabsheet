#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    string fname, sid, hsid;
    ifstream file;
    float m1, m2, m3, a, ha;
    ha = 0;


    cout << "Please enter the file name(path)" << endl;
    getline(cin, fname);

    file.open(fname);
//        cin.ignore(1, '\n');
    cout << "Student ID | Marks" << endl;

    while (!file.eof()){

        file >> sid >> m1 >> m2 >> m3;

        a = (m1+m2+m3)/3;

        if (ha == 0){
            ha = a;
            hsid = sid;
        }

        if (a > ha){
            ha = a;
            hsid = sid;
        }
        cout << sid << " | " << a << endl;


    }

    file.close();

    cout << "The student with highest average is " << endl;
    cout << hsid << " " << ha << endl;
    return 0;
}
