#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){

    float r, e;

    ofstream file("E:/CS Uni L1/Labsheets/Computer Programming/Labsheet W7/Weather.txt");

    for (int i = 1; i <= 3; i++){
        cout << "Please enter the rainfall(mm) and evaporation(mm) for region " << i << endl;
        cin >> r >> e;
        file<<r<<" "<<e;
        if (i != 3){
        file<<endl;
        }
    }

    file.close();

    return 0;
}
