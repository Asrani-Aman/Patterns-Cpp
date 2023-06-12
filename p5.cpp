// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// Function to demonstrate printing pattern
void p(int n)
{
    // Outer loop to handle number of rows
    // n in this case
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Driver Function
int main()
{
    int n = 5;
    p(n);
    return 0;
}
