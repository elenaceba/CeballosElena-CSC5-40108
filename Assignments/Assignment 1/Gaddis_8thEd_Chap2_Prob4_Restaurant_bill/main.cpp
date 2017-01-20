
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float food = 88.67, tax = 0.0675, tip = 0.2, notip, wtip;
    tax = food * tax;
    notip = food + tax;
    
    tip = notip * tip;
    wtip = food + tax + tip;
    
    std::cout.precision(2); 
    std::cout << std::fixed;
    
    std::cout << "Meal cost: $" << food << endl;
    std::cout << "Tax: $" << tax << endl;
    std::cout << "Tip: $" << tip << endl;
    std::cout << "Total bill: $" << wtip << endl;
    
    return 0;
}

