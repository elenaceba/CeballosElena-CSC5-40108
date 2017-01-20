
#include <iostream>
using namespace std;

int main() 
{
    int customers = 16500;
    float oneOrMore, citrus;
    
    oneOrMore = customers * 0.15;
    citrus = customers * 0.58;
    
    cout << "Number of customers who purchased 1 or more energy drinks per week: " << oneOrMore << endl;
    cout << "Number of customers who prefer citrus-flavored energy drinks: " << citrus << endl;
    
    return 0;
}

