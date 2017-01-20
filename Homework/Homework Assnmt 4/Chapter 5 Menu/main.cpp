/*
 * This program asks the user which kind of loops they would like to see, I think.
 * Actually, I'm still unclear on what I'm supposed to do with this program.
 */

#include <iostream>
using namespace std;

int main() 
{
    int choice;
    
     do{
        //Input values
        cout << "Choose from the list\n";
        cout << "Type 1 for a problem with a Do-While Loop\n";
        cout << "Type 2 for a problem with a While Loop\n";
        cout << "Type 3 for a problem with a For Loop\n";
        cin >> choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':
            {
                cout << "We are in problem 19, monthly budget, which uses a do-while loop.\n";
    
                //int main() 
                //{

                float budget, total, expense, over, savings;

                // Ask for budget, get budget
                cout << "Enter the amount of money you have budgeted for the month.\n";
                cin >> budget;


                // Ask for more expenses.
                do{
                    cout << "\nEnter your expense.\n";
                    cout << "Enter 0 when you have finished entering expenses.\n";
                    cin >> expense;

                    total += expense;
                }
                while (expense != 0); 

                // set floats for $ values
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);

                if (total >= budget)
                {
                    over = (total - budget);
                    cout << "\nYour total for the month was $" << total << ", which is $" 
                         << over << " more than your budget.\n";
                }                
                else
                {
                    savings = budget - total;
                    cout << "\nYour total for the month was $" << total << ", which is $" 
                         << savings << " less than your budget.\n";
                }

                return 0;
            //}    
                break;
                        }
            case '2':
            {
                cout << "We are in Problem 6, distance traveled, uses a while loop.\n";

                //int main() 
                //{
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
                //}
                break;
            }
            
            case '3':
            {
                cout << "We are in Problem 12, Celsius to Fahrenheit, uses a for loop.\n";
                
                //int main() 
                //{
                float fahr, num;

                cout << "Degrees Celsius\t Degrees Fahrenheit\n";
                cout << "------------------------------------\n";

                for (num = 0; num <= 20; num++)
                {
                    fahr = (num * (9.0/5.0)) + 32;
                    cout << "\t" << num << "\t\t" << fahr << endl;
                }

                return 0;
                     
                break;
            }
            
            default:
                cout << "You are exiting the program.\n";
        }
    } while (choice < 1 || choice > 3); 
        cout << "Exiting the program.\n";

    return 0;
}
    