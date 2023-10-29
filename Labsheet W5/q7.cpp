#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int n, c;
  int t = 0;

  cout << "Please enter a positive integer" << endl;
  cin >> n;

  while (c < n){
    c ++;
    t += c;
  }

    cout << "The sum is " << t << endl;

return 0;
}
