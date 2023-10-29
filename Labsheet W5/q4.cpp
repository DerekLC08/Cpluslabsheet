#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int x = 1;
  int s = 0;
  int n;

  cout << "Please enter positive integer less or equal 100" << endl;
  cin >> n;

  if (n <= 100){
        while(x <= 100){
            if (n % x == 0)
                cout << x << endl;
        x ++;
        }
  }
  else{
    cout << "Wrong input" << endl;
  }

return 0;
}
