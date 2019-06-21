// ourfunc.cpp -- use namespace out of function 

#include <iostream>
void simon(int);       //函数原型
using namespace std;   //在函数外使用命名空间

int main()
{
    // using namespace std;
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}


void simon(int n)
{
    // using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
}
