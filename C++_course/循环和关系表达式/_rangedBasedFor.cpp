// _rangeBasedFor.cpp -- a new format of for
#include <iostream>

int main()
{
    using namespace std;

    double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
    
    for (double x : prices)
        cout << x << endl;

    for (double &x : prices)
    {
        x = x * 0.8;
        cout << x << endl;
    }
    return 0;
}
