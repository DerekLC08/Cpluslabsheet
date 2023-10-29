#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    float num, sqr;

    ofstream file; //Declaring file stream object
    file.open("E:/CS Uni L1/Labsheets/Computer Programming/Labsheet W7/Squares.txt");

    file << "Number Square" << endl;


    do{
        cout << "Please enter a number" << endl;
        cin >> num;

        if (num != 0){
            sqr = pow(num, 2);
            file << num << "      " << sqr << endl;
        }

    } while (num != 0);

    file.close();

    return 0;
}
