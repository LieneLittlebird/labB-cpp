/* Liene Putniņa, lr12022
B12. Given a natural number n. Find the Fibonachi number f(n). 
Create and use a function to calculate the Fibonachi number f(n). 
(Fibonachi numbers are f(1) = 1, f(2) = 1, f(n) = f(n-1) + f(n-2), t. i. f(3)=2, f(4)=3, f(5)=5 utt.). 
Also, check if the given number n is a Fibonachi number. 
Create and use a function for this check.
Program created at: XXXX */

/* 1.Error message for incorrect input
2. Repeated execution
3. Source code
4. Test plan and results
5. Executed program
*/

#include <iostream>
#include <math.h>
using namespace std;

// A function that finds the Fibonacci number for the n parameter
int findFibonacci(int n)
{
    /* The Formula for a Fibonacci number - the sum of the two previous numbers.
    The function prints out the Fibonacci number for the input number (n)
    */
    n = (n - 1) + (n - 2);

    cout << "The Fibonacci number is " << n << endl;

    return 0;
};

int isFibonacci(int n)
{
    for (int i = 0; i <= n; i++)
    {
        // findFibonacci(n);
        // if (i == n)
        // {
        //     cout << "Is a Fibonacci number";
        // }
        // else
        // {
        //     cout << "NOT a Fibonacci number";
        // }
    }
    // Determine if a number is a perfect square
    // if (true), cout << Is Fibonacci; if (false), cout << NOT Fibonacci
    return 0;
}
// Execution of the program
int main()
{
    // Definition of the repeatable value - it will be checked at the end of each execution cycle
    int repeatExec;
    do
    {
        findFibonacci(8);
        isFibonacci(8);
        cout << " Enter 1 to continue or 0 to quit: " << endl;
        cin >> repeatExec;
    } while (repeatExec == 1);
}
