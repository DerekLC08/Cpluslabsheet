#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, pc, nc, sum;
    pc = 0; nc = 0; sum = 0;

    do{
        cout << "Please enter a number" << endl;
        cin >> num;

        if (num >= 0){
            pc ++;
            sum += num;
        }
        else if (num != -2)
            nc ++;

    }while (num != -2);

    cout << "The sum is " << sum << endl;
    cout << "The number of positive and negative integers is " << pc << " and " << nc << " respectively" << endl;

    return 0;
}
