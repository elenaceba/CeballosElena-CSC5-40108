/*Program outputs wave name based on user entered wavelength.*/

#include <iostream>
using namespace std;

int main() 
{
    float wlength;
    
    cout << "Enter electromagnetic wavelength in meters.\n";
    cin >> wlength;
    
    if (wlength > 1e-2)
        cout << "Radio Waves\n";
    else if (wlength > 1e-3)
        cout << "Microwaves\n";      
    else if (wlength > 7e-7)
        cout << "Infrared\n";
    else if (wlength > 4e-7)    
        cout << "Visible Light\n";
    else if (wlength > 1e-8)     
        cout << "Ultraviolet\n";
    else if (wlength > 1e-11)
        cout << "X Rays\n";
    else
        cout << "Gamma Rays\n";
    
    return 0;
}

