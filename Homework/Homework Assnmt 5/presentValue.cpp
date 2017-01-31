/*
 * To change this license header, choose License Headers in Project Properties.
 *
 * Created on January 31, 2017, 10:31 AM
 */

#include <math.h>
#include <iostream>

using namespace std;

void presentValue(int n, float r, float F);

int n;
float r, F;

int main() 
{
    cout << "Enter the number of years that you plan to let the money sit in the account.\n";
    cin >> n;
    
    cout << "Enter the annual interest rate.\n";
    cin >> r;
    
    cout << "Enter the future value that you want in the account.\n";
    cin >> F;
    
    presentValue(n, r, F);
            
    return 0;
}

void presentValue(int n, float r, float F)
{
   float denom, P;
   
   denom = pow((1 +  r), n);
   
   P = (F/denom);
   
   std::cout.precision(2); 
   std::cout << std::fixed;
    
   cout << "P = $" << P << endl;
  
}
