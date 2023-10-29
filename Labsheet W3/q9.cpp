#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int score;
  cout << "Please enter the score" << endl;
  cin >> score;

  if (score < 0 || score > 100)
    cout << "Invalid Marks" << endl;
  else if (score < 40)
    cout << "F" << endl;
  else if (score < 50)
    cout << "D" << endl;
  else if (score < 60)
    cout << "C" << endl;
  else if (score < 70)
    cout << "B" << endl;
  else if (score <= 100)
    cout << "A" << endl;

return 0;
}
