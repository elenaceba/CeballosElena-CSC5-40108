
#include <iostream>
using namespace std;

int main() 
{
    float loan, ins, gas, fix;
    
    cout << "Enter the monthly payment of your auto loan." << endl;
    cin >> loan;
    
    cout << "Enter the monthly cost of your auto insurance." << endl;
    cin >> ins;
    
    cout << "Enter the amount you pay for gas per month." << endl;
    cin >> gas;
    
    cout << "Enter the amount you pay monthly for auto maintenance" << endl;
    cout << "including oil, tires, etc.." << endl;
    cin >> fix;
    
    cout << "The total monthly cost of your automobile is $" << (loan + ins + gas + fix) << endl;
    cout << "The total annual cost of your automobile is $" << ((loan + ins + gas + fix) * 12) << endl;
         
    return 0;
}

