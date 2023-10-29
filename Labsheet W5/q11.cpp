#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{ float P, r;
  int n;

  cout << "Please enter the amount P, the rate r and the number of years n " << endl;
  cin >> P >> r >> n;

  for(int count = 1; count <= n; count ++){
    P = P * (1 + r);
    cout << "The amount is " << fixed << setprecision(2) << P << " for year " << count << endl;
  }

return 0;
}
