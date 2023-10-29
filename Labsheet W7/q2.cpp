#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    string n,s;

    ifstream file; //Declaring file stream object

    file.open("E:/CS Uni L1/Labsheets/Computer Programming/Labsheet W7/squares.txt");

    file >> n >> s;
    cout << n << " " << s << endl;

    while(!file.eof()){
        file >> n >> s;

        if (!file.eof())
            cout << n << "      " << s << endl;
    }

    file.close();

    return 0;
}
