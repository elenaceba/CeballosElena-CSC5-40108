/*
 * This program chooses a random number between 1 and 100 and prompts the user
 * to enter a guess until they guess the number.
 */

#include <cstdlib> //for rand & srand
#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 100;
    int guess, num, iter = 0;
    
    unsigned seed = time(0); //gets system time
    srand(seed); //seed for random number generator
    
    num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    cout << "Guess an integer between 1 and 100.\n";
    cin >> guess;
    
    if (guess < 1 || guess > 100)
    {
        cout << "Error. Please rerun the program.\n";
        return 0;
    }
    
    while (guess != num)
    {
        if (guess > num)
        {    
            iter++;
            cout << "Too high. Take another guess.\n";
            cin >> guess;
        }
        else
        {
            iter++;
            cout << "Too low. Take another guess.\n";
            cin >> guess;
        }
    }
    
    iter++;
    cout << "You guessed right. The number was " << num << "." << endl;
    cout << "It took " << iter << " guesses to find the answer.\n";
    
    return 0;
}

