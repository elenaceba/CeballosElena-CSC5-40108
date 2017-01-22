/*
 * This program asks the user which kind of loops they would like to see, and 
 * ideally shows them examples.
 * I couldn't get this problem to run because I had many, many mistakes that I 
 * couldn't figure out how to fix.
 */


#include <cstdlib> //for rand & srand
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath> // std::abs
using namespace std;

//Function Prototypes
void MonthlyBudget();
void DistanceTraveled();
void GreatFewest();
void RandNumGame();
void RandNumGameEnh();
void CtoF();
void PatternDisplay();
void MathTutor();
void AvgRain();

int main() 
{
    int choice;
    
    do{
        //Input values
        cout << "Choose from the list\n";
        cout << "Type 1 for a problem with a Do-While Loop\n";// 19
        cout << "Type 2 for a problem with a While Loop\n";// 6, 13, 20, 21
        cout << "Type 3 for a problem with a For Loop\n";// 12, 23
        cout << "Type 4 for a problem with nested If-Else Loops\n";// 8, 10
        cin >> choice;

        switch(choice){
            case '1':
            {
                MonthlyBudget();
                break;
            }

            case '2': // PROBS 6, 13, 20, 21
            {
                DistanceTraveled();
                GreatFewest();
                RandNumGame();
                RandNumGameEnh(); 
                break;
            }
            case '3': // Problems 12, 23
            {
                CtoF();
                PatternDisplay();
                break;
            }
            case '4': //Problems 8, 10
            {
                MathTutor();
                AvgRain();
                break;
            }
            default:
                cout << "Exiting the program.\n";
            
    } while (choice >= 1 || choice <= 4);
}
           
            
void MonthlyBudget()
{
    cout << "We are in problem 19, monthly budget.\n";

    float budget, total, expense, over, savings;

    // Ask for budget.
    cout << "Enter the amount of money you have budgeted for the month.\n";
    cin >> budget;

    // Ask for expenses.
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
}


void DistanceTraveled()
{
    cout << "We are in Problem 6, distance traveled.\n";
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
}


void GreatFewest()
{
    cout << "We are in Problem 13, largest and smallest numbers.\n";

    int num, smallest, largest;

    cout << "Enter an integer. Enter -99 when you'd like to quit.\n";
    cin >> num;

    smallest = num;
    largest = num;


    while (num != -99)
    {
        cout << "Enter an integer. Enter -99 when you'd like to quit.\n";
        cin >> num;

        if (num < smallest && num != -99)//<- WHY NEC WHEN WHILE LOOP CONTAINS SAME INFO?
            smallest = num; 
        else if (num > largest && num != -99)//<- WHY NEC WHEN WHILE LOOP CONTAINS SAME INFO?
            largest = num; 
    }

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;
}


void RandNumGame()
{             
    cout << "We are in problem 20, random number guessing game.\n";

    const int MIN_VALUE = 1;
    const int MAX_VALUE = 100;
    int guess, num;

    unsigned seed = time(0); //gets system time
    srand(seed); //seed for random number generator

    num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    cout << "Guess an integer between 1 and 100.\n";
    cin >> guess;

    if (guess < 1 || guess > 100)
    {
        cout << "Error. Please rerun the program.\n";
        return 0;
    }

    while (guess != num)
    {
        if (guess > num)
        {    
            cout << "Too high. Take another guess.\n";
            cin >> guess;
        }
        else
        {
            cout << "Too low. Take another guess.\n";
            cin >> guess;
        }
    }
    cout << "You guessed right. The number was " << num << "." << endl;
}


void RandNumGameEnh()
{
    cout << "We are now in problem 21, enhanced number guessing game.\n";

    const int MIN_VALUE = 1;
    const int MAX_VALUE = 100;
    int guess, num, iter = 0;

    unsigned seed = time(0); //gets system time
    srand(seed); //seed for random number generator

    num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    cout << "Guess an integer between 1 and 100.\n";
    cin >> guess;

    if (guess < 1 || guess > 100)
    {
        cout << "Error. Please rerun the program.\n";
        return 0;
    }

    while (guess != num)
    {
        if (guess > num)
        {    
            iter++;
            cout << "Too high. Take another guess.\n";
            cin >> guess;
        }
        else
        {
            iter++;
            cout << "Too low. Take another guess.\n";
            cin >> guess;
        }
    }

    iter++;
    cout << "You guessed right. The number was " << num << "." << endl;
    cout << "It took " << iter << " guesses to find the answer.\n";
}


void CtoF()                    
{
    cout << "We are in problem 12, Celsius to Fahrenheit conversion.\n";

    float fahr, num;

    cout << "Degrees Celsius\t Degrees Fahrenheit\n";
    cout << "------------------------------------\n";

    for (num = 0; num <= 20; num++)
    {
        fahr = (num * (9.0/5.0)) + 32;
        cout << "\t" << num << "\t\t" << fahr << endl;
    }
}   

void PatternDisplay()
{
    cout << "We are in problem 23, pattern display."

    int i, j;

    cout << "Pattern A\n";

    for (i = 0; i < 10; i++)//iterates through lines
    {    
        for (j = 0; j <= i; j++)//j gives you the symbol(s) on each line
            cout << "+";

    cout << endl;//to move to next line
    }

    cout << "\n\nPattern B\n";

    for (i = 0; i < 10; i++)//iterates through lines
    {
        for (int j = 0; j < (10 - i); j++)//j gives you the symbol(s) on each line
            cout << "+";

    cout << endl;//to move to next line
    }
}    
            
void MathTutor()            
{
    cout << "We are in problem 8, math tutor.\n";

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
        cout << "Error. Please rerun the program.\n";
}


void AvgRain()
{
    cout << "We are in problem 10, average rainfall.\n";

    float rain, total;
    int num, numYears, numMonths, month;

    cout << "How many years would you like to enter data for?\n";
    cin >> numYears;

    if (numYears < 1)
    {     
        cout << "Error. Please rerun the program.\n";
        return 0; 
    }    
    else
        for (num = 1; num <= numYears; num++)
        {
            for (month = 1; month <= 12; month++)
            {
                cout << "Enter total rainfall for month " << month << ":\n";
                cin >> rain;
                total += rain;
            }
        }

    cout << "You entered data for " << (numYears * 12) << " months.\n";
    cout << "The total amount entered was " << total << " inches.\n";
    cout << "The average rainfall per month was " << (total/(numYears * 12)) << " inches.\n";
}
return 0;
}
    