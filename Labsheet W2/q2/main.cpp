// quadratic.py
// A program that computes the real roots of a quadratic equation
// Note: This program crashes if the equation has no real roots.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ float a,b,c,x,y;
cout<<"This program finds the real roots to a quadratic"<<endl;
cout<<"Please enter the coefficients (a, b, c): ";
cin>>a>>b>>c;
float av = b * b - 4 * a * c;
if (av < 0)
{
    av = -av;
}
float discRoot = sqrt(av);
x = -b  / (2 * a);
y = discRoot / (2 * a);
cout<<"The solutions are: "<< x <<" + " << y << "i and "
 << x <<" - " << y << "i" << endl;
return 0;
}
