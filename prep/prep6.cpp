// Chapter 2, slide #14
#include <iostream>
using namespace std;

class Student
{
    public:
        Student(int i = 0);
        void setId(int i);
        int getId();
    private:
        int id;
};

Student::Student(int i)
{
    setId(i);
}
void Student::setId(int i)
{
    id = i;
}

int Student::getId()
{
    return id;
}

void nextStudentIdByValue(Student s)    // had we used nextStudentIdByValue(Student& s)
{                                       // we would get 21, because the id of the Student object at the address 
    int x = s.getId();                  // that was passed in has been changed
    x++;
    s.setId(x);
}

int main()
{
    Student s1(20);
    nextStudentIdByValue(s1);       // A copy of s1 has been passed here
    cout << s1.getId() << endl;     // which is why the result is still 20, and not 21
    return 0;                       // To fix this goto line 29
}