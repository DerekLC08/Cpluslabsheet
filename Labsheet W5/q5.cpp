#include <iostream>
using namespace std;

int main()
{ int c = 1;
  int s = 0;
  int n, x;

  cout << "Please enter the number of numbers to input" << endl;
  cin >> n;
    while(c <= n){
        cout << "Please enter the number" << endl;
        cin >> x;
        s += x;
        c ++;
    }
    cout << "The average is " << s/(c-1) << endl;

return 0;
}
