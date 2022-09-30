// Making a factorial funtion using recursive calls

#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if(n == 1)
        return 1;
    else
    {
        return factorial(n - 1) * n;
    }
}

int main()
{
    int n = 3;
    cout << factorial(n) << endl;
}