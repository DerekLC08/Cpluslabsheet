#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int score;
  cout << "Please enter the score" << endl;
  cin >> score;

  switch(score){
     case 5 : cout << "A" << endl;
     break;
     case 4 : cout << "B" << endl;
     break;
     case 3 : cout << "C" << endl;
     break;
     case 2 : cout << "D" << endl;
     break;
     case 1 : cout << "E" << endl;
     break;
     case 0 : cout << "F" << endl;
     default : cout << "Invalid Score" << endl;
     break;
  }
return 0;
}
