#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int t;

  cout << "Please enter the type of car to purchase(1-5)" << endl;
  cin >> t;

  switch (t){
  case 3 : cout << "Has front and rear sensors " << endl;

  case 2 : cout << "Has automatic mirrors " << endl;

  case 1 : cout << "1500 cc" << endl;
  break;

  case 5 : cout << "Has automatic gear ";

  case 4 : cout << "1200 cc" << endl;
  break;
  }
return 0;
}
