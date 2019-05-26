//carrots.cpp -- food processing program
//uses and displays a variable

#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "I have";
    cout << carrots;
    cout << "carrots";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << "carrots." << endl;
    return 0;
}

//-----------------------------------
//---未声明变量的错误----------
//carrot.cpp: In function ‘int main()’:
//carrot.cpp:12:5: error: ‘carrots’ was not declared in this scope
//     carrots = 25;
//     ^~~~~~~

