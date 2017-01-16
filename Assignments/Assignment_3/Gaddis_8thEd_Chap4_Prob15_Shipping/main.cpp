/* Program calculates shipping charge given input of package weight 
and distance shipped */

#include <iostream>
using namespace std;

int main() 
{
    float weight, rate, E9, total;
    int dist;
    
    
    //weight   
    
    cout << "Enter the weight of the package in kilograms.\n";
    cin >> weight;

    if (weight <= 2) 
        rate = 1.1;
    else if ( (weight > 2) && (weight <= 6) )
        rate = 2.2;
    else if ( (weight > 6) && (weight <= 10) )
        rate = 3.7;
    else if( (weight > 10) && (weight <= 20) )
        rate = 4.8;
    else
    {
        cout << "We do not ship items weighing more that 20kg or less than 0kg.\n";
        return(0);
    }
    
    // distance
    
    cout << "\nEnter distance to destination in miles.\n";
    cin >> dist;
    
    if ( (dist > 3000) || (dist < 10) )
    {
        cout << "\nWe do not ship fewer than 10 miles or farther than 3000 miles.\n";
        return(0);
    }
    
    E9 = dist/500;
    total = E9 * rate;
    
    // set decimal place for $ output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "\nTotal: $" << total << endl;
           
    return 0;
}

