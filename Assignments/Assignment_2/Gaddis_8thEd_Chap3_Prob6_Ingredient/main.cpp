
#include <iostream>
using namespace std;

int main() 
{
    int num;
    float sugar, butter, flour;
    
    cout << "How many cookies would you like to make?" << endl;
    cin >> num;
    
    sugar = (num * 1.5)/48;
    butter = (num * 1.0)/48;
    flour = (num * 2.75)/48;
     
    cout << "To make " << num << " cookies use " << sugar << "c sugar, " << butter <<
            "c butter and " << flour << "c flour." << endl;
    
    return 0;
}

