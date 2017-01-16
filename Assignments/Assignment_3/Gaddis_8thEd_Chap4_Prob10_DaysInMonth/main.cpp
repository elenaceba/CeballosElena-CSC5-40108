//Calculates number of days in month given user entered month and year

#include <iostream>
using namespace std;

int main() 
{
    int month, year, days;
    
    cout << "Enter a month (1-12): " << endl;
    cin >> month;
    cout << "Enter a year: " << endl;
    cin >> year;
    
    if (month == 2)
        if ( (year % 100 == 0) && (year % 400 == 0) )
            cout << "29 days\n";
        else if ( (year % 100 != 0) && (year % 4 == 0) )
            cout << "29 days\n";
        else
            cout << "28 days\n";
    
    else if ( (month == 4) || (month == 6) || (month == 9) || (month == 11) )
        cout << "30 days\n";
    
    else
        cout << "31 days\n";
    
    return 0;
}

