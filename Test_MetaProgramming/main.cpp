#include <iostream>
#include "template.h"
using namespace std;

int main()
{
    unsigned const n = 5;
   // cout << "Input unsigner number:" << endl;
   // cin >> n;
    const unsigned result = factorial<n>::value;
    cout << n << "! = " << result << endl;
    return 0;
}
