
#include <iostream>
using namespace std;

int main() 
{
    float fahr, num;
    
    cout << "Degrees Celsius\t Degrees Fahrenheit\n";
    cout << "------------------------------------\n";
    
    for (num = 0; num <= 20; num++)
    {
        fahr = (num * (9.0/5.0)) + 32;
        cout << "\t" << num << "\t\t" << fahr << endl;
    }
    
    return 0;
}