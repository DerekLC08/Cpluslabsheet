#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string fname, sid;
    ofstream file;
    float m1, m2, m3;

    cout << "Please enter the file name(path)" << endl;
    getline(cin, fname);

    file.open(fname, ios::app);

    while (true){
        cout << "Please enter the student ID of the student" << endl;
        getline(cin, sid);

        if (sid == "")
            break;
        cout << "Please enter the marks for the 3 tests" << endl;
        cin >> m1 >> m2 >> m3;  //cin stores '/n' in its buffer
        cin.ignore(1,'\n');     //Thus getline is skipped because getline does not ignore leading whitespace

        file << sid <<" "<< m1 <<" "<< m2 <<" "<< m3 << endl;

    }

    file.close();
    return 0;
}
