#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int n;
  float t = 0;
  float c = 0;

  cout << "Please enter the value of x and n" << endl;
  cin >> x >> n;

    p=1;
    i=1;

    while (i<=n){
        p = p * x;
        i ++;
    }
    cout << x << " power " << n << " is " << p << endl;

return 0;
}
