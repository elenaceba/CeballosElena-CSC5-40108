/* This program outputs a monthly charge for mobile phone usage based on 
 * user entered program and minutes used. It also evaluates each plan based 
 * on usage and outputs if there would have been savings by using a different plan.*/

#include <iostream>
using namespace std;

int main() 
{
    char package;
    int minin;
    float Acalc, Bcalc, Ccalc, Aextra, Bextra, bill;

    cout << "Which package did you purchase, A, B or C?" << endl;
    cin >> package;
    
    cout << "How many minutes have you used?" << endl;
    cin >> minin;
    
    // subtract extra minute charges only if positive
    Aextra = (minin - 450) * 0.45;
    Bextra = (minin - 900) * 0.4; 
 
    if (Aextra < 0)
        Acalc = 39.99;
    else 
        Acalc = 39.99 + Aextra;
    
    
    if (Bextra < 0)
        Bcalc = 59.99;
    else 
        Bcalc = 59.99 + Bextra;
    
    Ccalc = 69.99;
    
    // set floats for $ values
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    if (package == 'A')
    {
        bill = Acalc;
        cout << "Your total monthly charge is $" << Acalc << ".\n";

        if (bill > Bcalc && bill < Ccalc)
            cout << "You would have saved $" << (bill - Bcalc) << " if you were on the B plan.\n";      
        else if (bill < Bcalc && bill > Ccalc)
            cout << "You would have saved $" << (bill - Ccalc) << " if you were on the C plan.\n";
        else if (bill < Bcalc && bill < Ccalc)
            cout << "You are on the best plan for your usage.\n";
        else //if (bill > Bcalc && bill > Ccalc)
            if (Bcalc < Ccalc)
                cout << "You would have saved $" << (bill - Bcalc) << " if you were on the B plan.\n";
            else
                cout << "You would have saved $" << (bill - Ccalc) << " if you were on the C plan.\n";
    }
        
    else if (package == 'B')
    {
        bill = Bcalc;
        cout << "Your total monthly charge is $" << Bcalc << ".\n";
        
        if (bill > Acalc && bill < Ccalc)
            cout << "You would have saved $" << (bill - Acalc) << " if you were on the A plan.\n";  
        else if (bill < Acalc && bill > Ccalc)
            cout << "You would have saved $" << (bill - Ccalc) << " if you were on the C plan.\n";
        else if (bill < Acalc && bill < Ccalc)
            cout << "You are on the best plan for your usage.\n";  
        else //if (bill > Acalc && bill > Ccalc)
            if (Acalc < Ccalc)
                cout << "You would have saved $" << (bill - Acalc) << " if you were on the B plan.\n";
            else
                cout << "You would have saved $" << (bill - Ccalc) << " if you were on the C plan.\n";
    }
        
    else if (package == 'C')
    {
        bill = Ccalc;
        cout << "Your total monthly charge is $69.99.\n";
    
        if (bill > Acalc && bill < Bcalc)            
            cout << "You would have saved $" << (bill - Acalc) << " if you were on the A plan.\n";
        else if (bill < Acalc && bill > Bcalc)
            cout << "You would have saved $" << (bill - Bcalc) << " if you were on the B plan.\n";
        else if (bill < Acalc && bill < Bcalc)
            cout << "You are on the best plan for your usage.\n";
        else //if (bill > Acalc && bill > Bcalc)
            if (Acalc < Bcalc)
                cout << "You would have saved $" << (bill - Acalc) << " if you were on the A plan.\n";
            else
                cout << "You would have saved $" << (bill - Bcalc) << " if you were on the B plan.\n";
    }
    
    else
        cout << "Error. Please run the program again.\n";
    
    return 0;
}

