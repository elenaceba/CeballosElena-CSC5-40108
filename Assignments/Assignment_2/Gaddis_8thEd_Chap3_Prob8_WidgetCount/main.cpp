
#include <iostream>
using namespace std;

int main() 
{
    float pal, tot, widgweight, num;
    
    cout << "What is the weight of the pallet alone?" << endl;
    cin >> pal;
    cout << "What is the weight of the pallet and widgets together?" << endl;
    cin >> tot;
    
    widgweight = tot - pal;
    num = widgweight/12.5;
    
    cout << "There are " << num << " widgets stacked on the pallet." << endl;
    
    return 0;
}

