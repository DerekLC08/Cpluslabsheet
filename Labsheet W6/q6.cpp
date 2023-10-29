#include <iostream>
//Credits to Derek
using namespace std;

int main(){
    int x;

    cout << "Enter the value of x" << endl;
    cin >> x;

    for (int i = 0; i <= x; i++){           //Repetition of patterns
        for (int j = 0; j <= i; j++){       //Repetition of lines
            for (int k = 0; k <= j; k++){   //Repetition in a line
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
