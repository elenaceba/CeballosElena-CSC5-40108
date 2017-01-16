/*This program calculates charge for phone call given user entered start time 
 and length of call.*/

#include <iostream>
using namespace std;

int main() 
{   
    float calltime, stcast;
    int mins;
    
    cout << "Enter call start time in format HH.MM\n";
    cin >> calltime;
    stcast = calltime - static_cast<int>(calltime); // gets the numbers after decimal
    
    cout << "Enter the call length in minutes\n";
    cin >> mins;
    
    // set floats for $ values
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
   
    if ( (calltime > 23.59) || (calltime <= 0) || (stcast > 0.59))
        cout << "Error. Please rerun the program with start time in format HH.MM.\n";
    else if (calltime < 7.00)
        cout << "Cost of call: $" << (mins * 0.05) << endl;
    else if (calltime < 19.01)
        cout << "Cost of call: $" << (mins * 0.45) << endl;
    else //(calltime < 24.00)
        cout << "Cost of call: $" << (mins * 0.20) << endl;           
     
    return 0;
}

