/*
 * This program displays a couple of patterns made by nested for loops.
 */

#include <iostream>
using namespace std;

int main() 
{
    int i, j;
    
    cout << "Pattern A\n";
    
    for (i = 0; i < 10; i++)//iterates through lines
    {    
        for (j = 0; j <= i; j++)//j gives you the symbol(s) on each line
            cout << "+";

    cout << endl;//to move to next line
    }
    
    cout << "\n\nPattern B\n";
    
    for (i = 0; i < 10; i++)//iterates through lines
    {
        for (int j = 0; j < (10 - i); j++)//j gives you the symbol(s) on each line
            cout << "+";

    cout << endl;//to move to next line
    }

    return 0;
}

