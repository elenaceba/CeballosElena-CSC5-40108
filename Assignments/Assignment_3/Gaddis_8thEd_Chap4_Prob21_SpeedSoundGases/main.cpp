/* This program uses user entered medium choice and number of seconds 
 * to calculate distance sound travels through a medium.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int gas;
    float secs, distance;
    const int CO2 = 1, HELIUM = 2, HYDROGEN = 3, AIR = 4;

    cout << "Please select the number for the gas of your choice:\n";
    cout << "1. CO2\n";
    cout << "2. Helium\n";
    cout << "3. Hydrogen\n";
    cout << "4. Air\n";
    cin >> gas;
    
    // input validation for gas
    if ( (gas < 1) || (gas > 4) )
    {
        cout << "The valid choices are (1)CO2, (2)He, (3)H or (4)air.\n";
        cout << "Run the program again and select one of those.\n";
        return(0);
    }
   
    cout << "Please enter the number of seconds of travel between 1 and 30.\n";
    cin >> secs;
    
    // input validation for seconds (secs)
    if (secs < 0 || secs > 30)
    {
        cout << "Run the program again and select a number of seconds between 1 and 30.\n";
        return(0);
    }
    
    switch (gas)
    {
        case CO2:
        distance = 258 * secs;
        cout << "In " << secs << " seconds sound travels " << distance << " meters through carbon dioxide gas.\n";
        break;

        case HELIUM:
        distance = 972 * secs;
        cout << "In " << secs << " seconds sound travels " << distance << " meters through helium gas.\n";
        break;

        case HYDROGEN:
        distance = 1270 * secs;
        cout << "In " << secs << " seconds sound travels " << distance << " meters through hydrogen gas.\n";
        break;
    
        case AIR:
        distance = 331.5 * secs;
        cout << "In " << secs << " seconds sound travels " << distance << " meters through air.\n";
        break;
        
        default:
        cout << "The valid choices are CO2, He, H or air.\n";
        cout << "Run the program again and select one of those.\n";
    }
    
    return 0;
}

