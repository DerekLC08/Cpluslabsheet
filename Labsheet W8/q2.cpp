#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void SumArray(int A[], int B[]){
    int X[5];

    cout << "The sum of both arrays is" << endl;
    for (int i = 1; i <= 5; i++){
        X[i] = A[i] + B[i];
        cout << X[i] << endl;
    }


}

void InputArray(){
    int X1[5], X2[5];

    for (int i = 1; i <= 5; i++){
        cout << "Enter array elements for X1 and X2 with position " << i << endl;
        cin >> X1[i] >> X2[i];
    }

    SumArray(X1, X2);
}

int main(){

    InputArray();

    return 0;
}

