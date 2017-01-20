
#include <iostream>
using namespace std;

int main() 
{
    int num, calories;
    
    cout << "How many cookies did you eat?" << endl;
    cin >> num;
    
    calories = num * 100;
    
    cout << "You just consumed " << calories << " calories." << endl;
    
    return 0;
}

