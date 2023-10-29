// quadratic.py
// A program that computes the real and complex roots of a quadratic equation
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ float a,b,c,x,y;
cout<<"This program finds the real roots to a quadratic"<<endl;
cout<<"Please enter the coefficients (a, b, c): ";
cin>>a>>b>>c;

float av = b * b - 4 * a * c;
x = -b  / (2 * a);

if (av < 0)
{
    av = -av;
    float discRoot = sqrt(av);
    y = discRoot / (2 * a);
    cout<<"The solutions are: "<< x <<" + " << y << "i and "
    << x <<" - " << y << "i" << endl;
}
else
{
    float discRoot = sqrt(av);
    float root1 = (-b + discRoot) / (2 * a);
    float root2 = (-b - discRoot) / (2 * a);
    cout<<"The solutions are: "<<root1<<" and "<<root2<<endl;
}

return 0;
}
