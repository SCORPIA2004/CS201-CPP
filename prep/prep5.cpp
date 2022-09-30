// Write a global function which takes two int parameters and returns their largest

#include <iostream>
using namespace std;

int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

int main()
{
    cout << max(7,5) << endl;
}