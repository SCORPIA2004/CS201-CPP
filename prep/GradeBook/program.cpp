#include "GradeBook.h"
#include <iostream>
using namespace std;

int main()
{
    GradeBook gb1(102);
    GradeBook gb2;

    gb1.displayMessage();
    gb2.displayMessage();
    cout << gb1.computeAvg();
}