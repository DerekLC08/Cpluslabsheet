#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    string w;

    ifstream file1("E:/CS Uni L1/Labsheets/Computer Programming/Labsheet W7/file1.txt"); //Declaring file stream object for reading
    ifstream file2;//Not opened when being declared because it's not being used yet
    ofstream target("E:/CS Uni L1/Labsheets/Computer Programming/Labsheet W7/target.txt");

    while(!file1.eof()){
        getline(file1, w);
        target << w << endl;
    }

    file1.close();

    file2.open("E:/CS Uni L1/Labsheets/Computer Programming/Labsheet W7/file2.txt");

      while(!file2.eof()){
        getline(file2, w);
        target << w << endl;
    }

    file2.close();
    target.close();

    return 0;
}

