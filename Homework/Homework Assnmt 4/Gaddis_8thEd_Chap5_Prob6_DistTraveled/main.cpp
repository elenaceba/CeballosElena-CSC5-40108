/*
 * This program gets user inputs for speed of a vehicle and how many hours it 
 * has been running. It prints to screen how far the vehicle has traveled 
 * each hour up until the number of hours the vehicle traveled.
 */

#include <iostream>
using namespace std;

int main() 
{
    float speed, time, num = 1;
    
    cout << "What is the speed of the vehicle in mph?\n";
    cin >> speed;
    
    cout << "How many hours has it traveled?\n";
    cin >> time;

    cout << "Hour\t Distance Traveled\n";
    cout << "-----------------------------\n";
    
    while ( (speed > 0) && (time >= 1) && (num <= time) )
    {
        cout << " " << num << "\t\t" << (num * speed) << endl;
        num++;
    }
        
    return 0;
}

