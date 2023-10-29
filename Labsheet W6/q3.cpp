#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float m, t;
    t = 0;

    for(int i = 1; i <= 5; i ++){

        cout << "This is student " << i << endl;
        for(int j = 1; j <= 3; j++){
            cout << "Please enter the marks for subject " << j << endl;
            cin >> m;
            t += m;
        }
        cout << "The total marks is " << t << " and the average is " << t/3 << endl;

        t = 0; //setting total back to 0 for other students

    }
    return 0;
}
