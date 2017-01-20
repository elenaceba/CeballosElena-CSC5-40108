
#include <iostream>
using namespace std;

int main() 
{
    char package;
    int minin, A, B, C;
    float mincharge, totcharge;

    cout << "Which package did you purchase, A, B or C?" << endl;
    cin >> package;
    
    cout << "How many minutes have you used?" << endl;
    cin >> minin;
   
    //if (cin.fail())
    //{
    //    cout << "You entered an invalid option.\n";
    //    cout << "Please enter the number of minutes you have used.\n";
    //    cin >> minin;
    //} DOESN'T WORK YET. NEED LOOPS.
    
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
        
        default: cout << "You entered an invalid option." <<
                cout << "Which package did you purchase, A, B or C?\n";
    }
    
    return 0;
}

