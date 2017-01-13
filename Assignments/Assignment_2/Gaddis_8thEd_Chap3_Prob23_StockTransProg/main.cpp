
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float com = 0.02; 
    int bought, buycom, tot1, sold, sellcom, tot2;
    
    bought = 1000 * 45.5;//45500
    buycom = com * bought;//910
    tot1 = bought + buycom;//46410
    
    sold = 1000 * 56.90;//56900
    sellcom = com * sold;//1138
    tot2 = sold + sellcom;//58038
    
    std::cout.precision(2); 
    std::cout << std::fixed;
    
    cout << "Joe paid $" << bought << " for stock." << endl;
    cout << "He paid $" << buycom << " in commission when he bought the stock." << endl;
    cout << "Joe sold the stock for $" << sold << endl;
    cout << "He paid $" << sellcom << " in commission when he sold the stock." << endl;
    cout << "Joe's net gain was $" << (tot2 - tot1) << endl;
    
    return 0;
}

