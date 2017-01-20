// Program calculates BMI based on user input of height and weight.

#include <iostream>
using namespace std;

int main() 
{
    float height, weight, BMI;
    
    cout << "Enter height in inches.\n";
    cin >> height;
    
    cout <<"Enter weight in pounds.\n";
    cin >> weight;
    
    BMI = (weight * 703) / (height * height);
    
    if (BMI < 18.5)
        cout << "Based on your BMI you are underweight." << endl;
    else if ( (BMI >= 18.5) && (BMI <= 25))
        cout << "Based on your BMI you are of optimal weight." << endl;
    else //(BMI > 25)
        cout << "Based on your BMI you are overweight." << endl;        
    
    return 0;
}

