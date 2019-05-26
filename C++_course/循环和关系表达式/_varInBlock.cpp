// varInBlock.cpp - var in Block only exist in Block
// This isn't a resource code following the course | C++ Primer Plus |.
#include <iostream>
int main()
{
    using namespace std;
    int x = 20;

    //internal variable will lose after block code end perform.
    {
        int y = 100;
        cout << x << endl;
        cout << y << endl;
    }
    cout << x << endl;
    // cout << y << endl;
    
    cout << "-------------------------";

    {
        cout << x << endl;
        int x = 100;
        cout << x << endl;
    }
    cout << x << endl;

    return 0;
}
