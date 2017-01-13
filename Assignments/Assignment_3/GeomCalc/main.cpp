
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int choice;
    float radius, area, width, length, base, height;

    cout << "Geometry Calculator\n\n";
    cout << setw(20) << "1. Calculate the Area of a Circle\n";
    cout << setw(20) << "2. Calculate the Area of a Rectangle\n";
    cout << setw(20) << "3. Calculate the Area of a Triangle\n";
    cout << setw(20) << "4. Quit\n\n";
    cout << setw(20) << "Enter your choice (1-4)\n";
    cin >> choice;
    
    if (choice < 1 || choice > 4)
    {
        cout << "Error. Please enter a value between 1 and 4.\n";
        cin >> choice; //needed?
    }
    else if (choice == 1)
    {
        cout << "What is the radius of the circle?\n";
        cin >> radius;
        area = 3.14159 * radius * radius;
        cout << "A circle with radius " << radius << " has area of " 
                << area << "." <<endl;
    }
    else if (choice == 2)
    {
        cout << "What is the rectangle's length?\n";
        cin >> length;
        cout << "What is the rectangle's width?\n";
        cin >> width;
        cout << "A rectangle with length " << length << " and width "
                << width << " has area of " << (length * width) << "." << endl;
    }
    else if (choice == 3)
    {
        cout << "What is the base of the triangle?\n";
        cin >> base;
        cout << "What is the height of the triangle?\n";
        cin >> height;
        cout << "The area of a triangle with base " << base << " and height " << height 
                << " is " << (base * height * 0.5) << "." << endl;
    }
   // else (choice == 4)
    //{
      //  break;
    //}
    
    return 0;
}

