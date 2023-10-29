#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){

    float r, e;
    int c = 1;

    ifstream file("E:/CS Uni L1/Labsheets/Computer Programming/Labsheet W7/Weather.txt");

    while (!file.eof()){
        file>>r>>e;
        if (e > r)
            cout << "There is a water deficit ";
        else if (r > e)
            cout << "There is a water surplus ";
        else
            cout << "The level of water has remained the same ";
        cout << "in region " << c << endl;
        c++;
    }

    file.close();

    return 0;
}
