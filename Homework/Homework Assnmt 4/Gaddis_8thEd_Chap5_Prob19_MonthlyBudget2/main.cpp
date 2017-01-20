/*
 * This program uses user input total budget prediction and individual expenses 
 * to assess if user is over or under their monthly budget.
 */

#include <iostream>
using namespace std;

int main() 
{
    
    float budget, total, expense, over, savings;
    
    // Ask for budget, get budget
    cout << "Enter the amount of money you have budgeted for the month.\n";
    cin >> budget;
    
    
    // Ask for more expenses.
    do{
        cout << "\nEnter your expense.\n";
        cout << "Enter 0 when you have finished entering expenses.\n";
        cin >> expense;
        
        total += expense;
    }
    while (expense != 0); 
    
    // set floats for $ values
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    if (total >= budget)
    {
        over = (total - budget);
        cout << "\nYour total for the month was $" << total << ", which is $" 
             << over << " more than your budget.\n";
    }                
    else
    {
        savings = budget - total;
        cout << "\nYour total for the month was $" << total << ", which is $" 
             << savings << " less than your budget.\n";
    }

    return 0;
}