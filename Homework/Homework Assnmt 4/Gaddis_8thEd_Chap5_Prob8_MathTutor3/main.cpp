#include <cstdlib> //for rand & srand
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath> // std::abs
using namespace std;

int main() 
{
    int choice;
    float ans, num1, num2, answer, tol;
    const float MILLION = 1.0e6f;

    
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 999;
    
    unsigned seed = time(0); //gets system time
    srand(seed); //seed for random number generator
    
    num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;  
    
    cout << "Choose which type of problem you want:\n";
    cout << " 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Quit program\n";
    cin >> choice;
    
    if(choice == 1)
    {
        cout << setw(6) << num1 << endl;
        cout << "+" << setw(5) << num2 << endl;
        cout << "-------" << endl;
    
        cout << "\nEnter your answer." << endl;
        cin >> ans;
        
        if (ans == num1 + num2)
        {
            cout << "Congratulations! You got it right.\n";  
            cout << setw(6) << num1 << endl;
            cout << "+" << setw(5) << num2 << endl;
            cout << "-------" << endl;
            cout << setw(6) << (num1 + num2) << endl;
        }
        else
            cout << "Not quite. Try again by rerunning the program.\n";
    }
    else if (choice == 2)
    {
        cout << setw(6) << num1 << endl;
        cout << "-" << setw(5) << num2 << endl;
        cout << "-------" << endl;
    
        cout << "\nEnter your answer." << endl;
        cin >> ans;
    
        if (ans == num1 - num2)
        {
            cout << "Congratulations! You got it right.\n";  
            cout << setw(6) << num1 << endl;
            cout << "-" << setw(5) << num2 << endl;
            cout << "-------" << endl;
            cout << setw(6) << (num1 - num2) << endl;
        }
        else
            cout << "Not quite. Try again by rerunning the program.\n";
    }
    else if(choice == 3)
    {
        cout << setw(6) << num1 << endl;
        cout << "X" << setw(5) << num2 << endl;
        cout << "-------" << endl;
        cout << "\nEnter your answer. Limit it to 3 decimal points." << endl;
        cin >> ans;
        
        if (ans == num1 * num2)
        {
            cout << "Congratulations! You got it right.\n";
            cout << setw(6) << num1 << endl;
            cout << "X" << setw(5) << num2 << endl;
            cout << "-------" << endl;
            cout << setw(6) << (num1 * num2) << endl;
        }
        else 
            cout << "Not quite. Try again by rerunning the program.\n";
    }
    else if (choice == 4)//WHY DOESN'T THIS WORK? PLEASE HELP.
    {
        // set decimal place for output
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);
       
        cout << num1 << "/" << num2 << " = " << endl;  
        cout << "\nEnter your answer." << endl;
        cin >> answer;
        
        // an effort to get floating point numbers to match
        tol = abs(answer/ MILLION);        
        
        if(abs(answer) < tol) //if (answer == (num1/num2))
        {
            cout << num1 << "/" << num2 << " = " << (num1/num2) << endl;
            cout << "Congratulations! You got it right.\n";               
        }
        else
        {
            cout << "Not quite. Try again by rerunning the program.\n";
            cout << num1 << " / " << num2 << " = " << (num1/num2) << endl;
        }    
    }  
    else if (choice == 5)
    {
        cout << "Exiting program.\n";
        return 0;    
    }
    else
    {
        cout << "Error. Please rerun the program.\n";
    }
     
    return 0;
}
