#include <iostream>
#include <cmath>
using namespace std;

int main()
{ float s = 0;
  int n, c;
  float l = 0; float m = 0;
  float a, x;

  cout << "Please enter the number of numbers to input" << endl;
  cin >> n;
  c = n;
    while(n > 0){
        cout << n << " numbers left to enter" << endl;
        cin >> x;
        if (n == c)
            m = x;
        if (x >= l)
            l = x;
        else
            m = x;
        s += x;
        n -= 1;
    }

    cout << "The average is " << s/c << endl;
    cout << "The largest number is " << l << " and the smallest number is " << m << endl;

return 0;
}
