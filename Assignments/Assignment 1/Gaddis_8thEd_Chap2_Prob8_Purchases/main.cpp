
#include <iomanip>
using namespace std;

int main() 
{
    float c1=15.95, c2=24.95, c3=6.95, c4=12.95, c5=3.95, subtotal, tax, total;
    
    subtotal = c1 + c2 + c3 + c4 + c5;
    tax = subtotal * 0.07;
    total = subtotal + tax;
    
    std::cout.precision(2); 
    std::cout << std::fixed;

    cout << "Item 1 price: $" << c1 << endl;
    cout << "Item 2 price: $" << c2 << endl;
    cout << "Item 3 price: $" << c3 << endl;   
    cout << "Item 4 price: $" << c4 << endl;   
    cout << "Item 5 price: $" << c5 << endl;
    cout << "Subtotal: $" << subtotal << endl;
    std::cout << "Sales tax: $" << tax << endl;
    std::cout << "Total: $" << total << endl;
    
    return 0;
}

