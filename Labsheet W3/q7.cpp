#include <iostream>
#include <cmath>
using namespace std;

int main()
{ float num;
  cout << "Please enter a number" << endl;
  cin >> num;

  if (sqrt(num) == int(sqrt(num)))
    cout << num << " is a perfect square" << endl;
  else
    cout << num << " is not a perfect square" << endl;

return 0;
}
