#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int r = 495;
    float g1 = 0.2;
    float g2 = 0.1;
    int y = 0;

    while (r <= 1500){
        if (r <= 1000)
            r = r * (1 + g1);
        else
            r = r * (1 + g2);
        y ++;
    }

    cout << "The number of years it would take for the rabbit population to exceed 1500 is " << y << endl;

    return 0;
}
