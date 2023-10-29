#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int x = 0;
  int s = 0;
  int n;

  cout << "Please enter the value of n" << endl;
  cin >> n;

  cout << "multiple | square" << endl;

  while(x <= n){
    cout << x << " | " << s << endl;
    x += 3;
    s = pow(x, 2);
  }

return 0;
}
