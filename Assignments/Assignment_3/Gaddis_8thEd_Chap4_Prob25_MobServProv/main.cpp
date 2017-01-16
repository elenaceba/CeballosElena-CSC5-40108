/* This program calculates monthly mobile phone charges based on user entered
 * program and minutes used.*/

#include <iostream>
using namespace std;

int main() 
{
    char package;
    int minin;
    float mincharge, totcharge;

    cout << "Which package did you purchase, A, B or C?" << endl;
    cin >> package;
    
    cout << "How many minutes have you used?" << endl;
    cin >> minin;
   
    switch (package)
    {
        case 'A':
            mincharge = (minin - 450) * 0.45;
            totcharge = 39.99 + mincharge;
            cout << "Your total monthly charge is $" << totcharge << endl;
            break;
        
        case 'B':
            mincharge = (minin - 900) * 0.4;
            totcharge = 59.99 + mincharge;
            cout << "Your total monthly charge is $" << totcharge << endl;
            break;
        
        case 'C':
            cout << "Your total monthly charge is $69.99\n";
            break;
        
        default: 
            cout << "You entered an invalid option.\n";
            cout << "Please rerun the program with choice of package A, B or C.\n";
    }
    
    return 0;
}
