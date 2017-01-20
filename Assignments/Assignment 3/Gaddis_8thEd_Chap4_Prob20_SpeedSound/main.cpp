/*
 This program calculates distance traveled by sound through different media.
 */

#include <iostream>
using namespace std;

int main() 
{
    int medium, speed;
    float dist, secs;
    
    cout << "Choose a medium for sound to travel through. Enter its number.\n";
    cout << "1. Air\n";
    cout << "2. Water\n";
    cout << "3. Steel\n";
    cin >> medium;
    
    cout << "Enter a distance to travel in feet.\n";
    cin >> dist;
    
    if ( (medium < 1) || (medium > 3) )
        cout << "Error. Please rerun the program.\n";
    else if (medium == 1)
        cout << "It takes " << (dist/1100) << " seconds for sound to travel " << dist << " feet through air." << endl;
    else if (medium == 2)
        cout << "It takes " << (dist/4900) << " seconds for sound to travel " << dist << " feet through water." << endl;
    else// (medium == 3)
        cout << "It takes " << dist/16400 << " seconds for sound to travel " << dist << " feet through steel." << endl;
          
    return 0;
}

