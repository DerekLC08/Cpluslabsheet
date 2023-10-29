#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x,y,f;
    int a,c, ma, mc
    char q;
    cout << "What's x and y?" << endl;
    cin >> x >> y;

    cout << "Is the head of the family a member? Y/N" << endl;
    cin >> q;

    cout << "Please enter the number of adults and the number of children" << endl;
    cin >> a >> c;

    if (q == "y" || q == "Y")
        f = x*a+y*c;
    else
    {
        cout << "Enter the number of adults and children who are members" << endl;
        cin >> ma >> mc;
        f = (a-ma)*x*2 +(c-mc)*y*2 + ma*x + mc*y;
    }
    cout << "The fee to be paid is " << f << endl;
return 0;
}
