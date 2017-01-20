
#include <iostream>
using namespace std;

int main() 
{
    float fahr, num;
    
    cout << "Enter temperature in degrees Celsius." << endl;
    cin >> num;
    
    fahr = (num * (9.0/5.0)) + 32;
    
    cout << num << " degrees Celcius is " << fahr << " degrees Fahrenheit." << endl;
    
    return 0;
}

