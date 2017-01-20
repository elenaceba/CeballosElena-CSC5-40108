
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float cost = 14.95, markup, total;
    markup = cost * 0.35;
    total = cost + markup;
    
    std::cout.precision(2); 
    std::cout << std::fixed;
    
    std::cout << "$" << total << endl;
    
    return 0;
}

