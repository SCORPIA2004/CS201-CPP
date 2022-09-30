// Letter Grade system using switch case statements

#include <iostream>
using namespace std;

int main()
{
    //  A: 90-100, B: 80-89, C: 70-79, D: 60-69, F: 0-59

    int grade;
    string letter;
    cout << "Enter grade: ";
    cin >> grade;

    // check if in bounds
    if(grade < 0 || grade > 100)
        cout << "Invalid grade";
    else
    {
        switch (grade / 10)
        {
            case 10:  letter = "A"; break;
            case 9: letter = "A"; break;
            case 8: letter = "B"; break;
            case 7: letter = "C"; break;
            case 6: letter = "D"; break;
            default: letter = "F"; break;
        }
        cout << "Letter grade is: " << letter << endl;
    }

}