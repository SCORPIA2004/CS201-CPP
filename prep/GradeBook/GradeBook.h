#ifndef __GRADEBOOK_H
#define __GRADEBOOK_H

#include <string>
using namespace std;

class GradeBook
{
public:
    // Constructors 
    GradeBook(int no);
    GradeBook();

    //methods
    void setCourseNo(int no);
    int getCourseNo();
    void displayMessage(string msg);
    void displayMessage();
    double computeAvg();

private:
    int courseNo;
};

#endif