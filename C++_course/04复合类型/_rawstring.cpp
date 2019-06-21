// _rawstring.cpp -- raw string format in C++ 11 standard
// this isn't a source code file following the | C++ Primer Plus | course.
// it only is a self debugging file.
#include <iostream>
int main()
{
    using namespace std;

    // R"(...)" handle a raw string.
    cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n';
    // R"...(......)...* handle the special condition when the | R"(...)" | is included in the raw string.
    cout << R"+*("(Who wouldn't?)", she whispered.)+*" << endl;
    return 0;
}
