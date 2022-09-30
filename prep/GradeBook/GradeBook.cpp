#include <iostream>
using namespace std;
#include "GradeBook.h"

GradeBook::GradeBook(int no)
{
    setCourseNo(no);
}

GradeBook::GradeBook()
{
    setCourseNo(0);
}

void GradeBook::setCourseNo(int no)
{
    if(no >= 100 && no <= 999 || no == 0)
        courseNo = no;
    else
    {
        cout << "Invalid Course number" << endl;
        courseNo = 0;
    }
}

int GradeBook::getCourseNo()
{
    return courseNo;
}

void GradeBook::displayMessage(string msg)
{
    cout << msg << " " << getCourseNo() << "!" << endl;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to CS" << getCourseNo() << "!" << endl;
}

double GradeBook::computeAvg()
{
    int current, count = 0, total = 0;

    cout << "Enter grades. -1 to stop: ";
    cin >> current;
    while(current >= 0)
    {
        total += current;
        count++;
        cout << "Enter grades. -1 to stop: ";
        cin >> current;
    }
    
    if(count != 0)
        return static_cast<double>(total) / count;
    else
        return 0;
}
