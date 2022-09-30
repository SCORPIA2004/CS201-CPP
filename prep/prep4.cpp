// testing 'continue' and 'break' blocks

#include <iostream>
using namespace std;

int main()
{
    // using 'break' to break out of control structures
    for(int i = 1; i <= 5; i++)
    {
        if(i == 3)
            break;;
        cout << i << endl;
    }
    cout << "break done" << endl << endl;

    // using 'continue' to continue the structure
    for(int i = 1; i <= 5; i++)
    {
        if(i == 3)
            continue;;
        cout << i << endl;
    }
    cout << "continue done" << endl;
}