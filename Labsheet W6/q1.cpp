#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;

    do{
        cout << "Please enter a positive number" << endl;
        cin >> num;

        if (num >= 0)
            cout << "The square of that number is " << sqrt(num) << endl;

    }while (num >= 0);

    return 0;
}
