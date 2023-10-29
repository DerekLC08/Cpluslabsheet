#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    string w;

    ifstream file; //Declaring file stream object for reading
    ofstream file2;//Declaring file stream object for writing

    file.open("E:/CS Uni L1/Labsheets/Computer Programming/Labsheet W7/input.dat");
    file2.open("E:/CS Uni L1/Labsheets/Computer Programming/Labsheet W7/output.dat");


    while(!file.eof()){
        getline(file,w);
        file2 << w << endl;
    }

    file.close();
    file2.close();

    return 0;
}

