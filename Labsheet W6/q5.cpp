#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int c, n;
    float v, t;
    while (c != 0){

    cout << "**********************************" << endl;
    cout << "********Counting in Maths*********" << endl;
    cout << "**********************************" << endl;
    cout << "1.Sum of first n counting numbers" << endl;
    cout << "2.Sum of first nth odd numbers" << endl;
    cout << "3.Number of division by two" << endl;
    cout << "0.Exit" << endl;
    cout << "**********************************" << endl;
    cout << "Enter your choice (0-3):" << endl;
    cin >> c;

    if (c == 1){
        cout << "Enter the number n" << endl;
        cin >> n;

        t = 0;

        for(int i = 1; i <= n; i++){
            t += i;
        }

        cout << "The sum is " << t << endl;
    }
    else if (c == 2){
        cout << "Enter the number n" << endl;
        cin >> n;

        t = 0;

        for(int i = 1; i <= n; i++){
            if (i % 2 != 0)
                t += i;
        }
        cout << "The sum of the first nth odd numbers is " << t << endl;
    }
    else if (c == 3){
        cout << "Enter a number" << endl;
        cin >> v;

        t = 0;

        while (true){
            if (int(v) % 2 == 0){
                v = v / 2;
                t ++;
            }
            else
                break;
        }
        cout << "The number of times this number can be divided by 2 is " << t << endl;
    }

    }

    return 0;
}
