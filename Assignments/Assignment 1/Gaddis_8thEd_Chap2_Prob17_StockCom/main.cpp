
#include <iostream>
using namespace std;

int main()
{
    int share = 35, stock, com, total;
    
    stock = share * 750;
    com = stock * 0.02;
    total = stock + com;
    
    cout << "The amount paid for the stock is: $" << stock << endl;
    cout << "The amount of the commission is: $" << com << endl;
    cout << "The amount paid for the stock plus commission: $" << total << endl;
    
    return 0;
}

