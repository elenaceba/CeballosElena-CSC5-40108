/*
 * This program takes as many numbers as the user wants to enter and calculates 
 * the largest and smallest of those numbers.
 */

#include <iostream>
using namespace std;

int main() 
{
    int num, smallest, largest;

    cout << "Enter an integer. Enter -99 when you'd like to quit.\n";
    cin >> num;
    
    smallest = num;
    largest = num;
    
    
    while (num != -99)
    {
        cout << "Enter an integer. Enter -99 when you'd like to quit.\n";
        cin >> num;
        
        if (num < smallest && num != -99)//<- WHY NEC WHEN WHILE LOOP CONTAINS SAME INFO?
            smallest = num; 
        else if (num > largest && num != -99)//<- WHY NEC WHEN WHILE LOOP CONTAINS SAME INFO?
            largest = num; 
    }
    
    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;
    
    return 0;
}
