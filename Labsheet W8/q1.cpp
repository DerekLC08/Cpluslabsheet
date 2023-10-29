#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int maxPosn(int x[]){
    int h, hp;
    for (int i = 1; i <= 10; i++){
        if (h == NULL){
            h = x[i];
            hp = i;
        }
        if (x[i] > h){
            h = x[i];
            hp = i;
        }
    }
    return hp;
}

int main(){
    int A[10];

    for (int i = 1; i <= 10; i++){
        cout << "Please enter the value in array element " << i << endl;
        cin >> A[i];
    }

    cout << "The position of the largest value of x is " << maxPosn(A) << endl;

    return 0;
}

