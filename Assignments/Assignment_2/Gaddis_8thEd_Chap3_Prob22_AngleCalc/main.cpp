
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    float angle;
    
    cout << "Enter an angle in radians." << endl;
    cin >> angle;
  
    cout << "The sine of " << angle << " radians is " << sin(angle) << endl;
    cout << "The cosine of " << angle << " radians is " << cos(angle) << endl;
    cout << "The tangent of " << angle << " radians is " << tan(angle) << endl;
    
    return 0;
}

