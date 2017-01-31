/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * Created on January 31, 2017, 11:03 AM
 */

#include <cstdlib> //for rand & srand
#include <iostream>
#include <ctime>
using namespace std;

void coinToss(int n);


int main() 
{
    int n;
    
    cout << "How many coin tosses do you want?\n";
    cin >> n;
    
    coinToss(n);

    return 0;
}

void coinToss(int n)
{
    int i, num;
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 2;
    
    unsigned seed = time(0); //gets system time
    srand(seed); //seed for random number generator
    
    for(i = 0; i < n; i++)
    {    
        num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        if (num == 1)
            cout << "heads" << endl;
        else
            cout << "tails" << endl;
    }
    
}

