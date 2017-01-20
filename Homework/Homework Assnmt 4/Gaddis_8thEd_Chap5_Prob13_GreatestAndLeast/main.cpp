/*
 * This program
 */

#include <iostream>
using namespace std;

int main() 
{
    int num, smallest, biggest;
    do
    {
        cout << "Enter a positive integer. Enter -99 when you'd like to quit.\n";
        cin >> num;
        
        if (num < smallest && num > 0)
            smallest = num; 
        else if (num > biggest && num > 0)
            biggest = num; 
        
    }while (num != -99);
    
    cout << "Largest number: " << biggest << endl;
    cout << "Smallest number: " << smallest << endl;
    
    return 0;
}

