#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    string w;
    float n,s;
    float t,c,s1,small,large;
    t = 0;
    c = -1;
    large = 0;

    ifstream file; //Declaring file stream object for reading
    ofstream file2;//Declaring file stream object for writing

    file.open("E:/CS Uni L1/Labsheets/Computer Programming/Labsheet W7/squares.txt");

    file >> w >> w;

    while(!file.eof()){
        file >> n >> s;

        if (c == -1)
            small = s;

        if (s < small)
            small = s;
        else if (s > large)
            large = s;

        if (!file.eof())
            t += s;
            c ++;
    }

    file.close();

    file2.open("E:/CS Uni L1/Labsheets/Computer Programming/Labsheet W7/Analysis.txt");

    file2 << "Sum      " << t << endl;
    file2 << "Average  " << t/c << endl;
    file2 << "Smallest " << small << endl;
    file2 << "Largest  " << large << endl;

    file2.close();

    return 0;
}
