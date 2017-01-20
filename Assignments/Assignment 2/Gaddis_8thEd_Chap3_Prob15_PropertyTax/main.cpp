
#include <iostream>
using namespace std;

int main() 
{
    float tax, totvalue, taxvalue;
    
    cout << "What is the value of your property?" << endl;
    cin >> totvalue;
    
    taxvalue = totvalue - (0.4 * totvalue);
    
    tax = taxvalue * 0.0075;

    cout << "The tax on your property is $" << tax << endl;
    
    return 0;
}

