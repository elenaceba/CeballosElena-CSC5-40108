
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    const float YEN_PER_DOLLAR =  115.45;
    const float EUROS_PER_DOLLAR = 0.95;
    int dol;
    
    std::cout.precision(2); 
    std::cout << std::fixed;
    
    cout << "How many dollars would you like to convert?" << endl;
    cin >> dol;
    
    std::cout << dol << " dollars converts to " << (dol * YEN_PER_DOLLAR) << 
     " Yen or " << (dol * EUROS_PER_DOLLAR) << " Euros." << endl;
    
    return 0;
}

