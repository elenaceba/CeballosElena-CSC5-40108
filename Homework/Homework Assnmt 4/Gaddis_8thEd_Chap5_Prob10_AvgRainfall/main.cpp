/*
 * This program uses user input of average rainfall by month to calculate 
 * average rainfall by year.
 */

#include <iostream>
using namespace std;

int main() 
{
    float rain, total;
    int num, numYears, numMonths, month;
    
    cout << "How many years would you like to enter data for?\n";
    cin >> numYears;
    
    if (numYears < 1)
    {     
        cout << "Error. Please rerun the program.\n";
        return 0; 
    }    
    else
        for (num = 1; num <= numYears; num++)
        {
            for (month = 1; month <= 12; month++)
            {
                cout << "Enter total rainfall for month " << month << ":\n";
                cin >> rain;
                total += rain;
            }
        }
    
    cout << "You entered data for " << (numYears * 12) << " months.\n";
    cout << "The total amount entered was " << total << " inches.\n";
    cout << "The average rainfall per month was " << (total/(numYears * 12)) << " inches.\n";
  
    return 0;
}

