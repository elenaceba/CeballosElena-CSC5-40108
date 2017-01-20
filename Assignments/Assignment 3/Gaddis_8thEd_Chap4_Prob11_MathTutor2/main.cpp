/* Program produces an addition problem through random numbers. 
 * User enters their answer. Their answer is checked and the 
 * solved problem is shown*/

#include <cstdlib> //for rand & srand
#include <iostream>
#include <ctime>
#include <iomanip> // for setw()
using namespace std;

int main() 
{
    const int MIN_VALUE = 0;
    const int MAX_VALUE = 999;
    int num1, num2, ans;
    
    unsigned seed = time(0); //gets system time
    srand(seed); //seed for random number generator
    
    num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    cout << setw(6) << num1 << endl;
    cout << "+" << setw(5) << num2 << endl;
    cout << "-------" << endl;
    
    cout << "\nEnter your answer." << endl;
    cin >> ans;
    
    if (ans == num1 + num2)
        cout << "Congratulations! You got it right.\n";
    else 
        cout << "Not quite. Try again by rerunning the program.\n";
    
    cout << setw(6) << num1 << endl;
    cout << "+" << setw(5) << num2 << endl;
    cout << "-------" << endl;
    cout << setw(6) << (num1 + num2) << endl;
    
    return 0;
}
