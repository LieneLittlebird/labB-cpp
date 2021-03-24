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
*/

#include <iostream>
using namespace std;

// A function that finds the Fibonacci number for the n parameter
int findFibonacci(int n)
{
    // The Formula for a Fibonacci number - the sum of the two previous numbers.
    n = (n - 1) + (n - 2);

    bool continueLoop = true;
    continueLoop = true;
    while (continueLoop)
    {
        cin >> n;
        if (cin.fail())
        {
            cout << "Invalid input. Please, enter an integer\n";
            cin.clear();
            cin.ignore(256, '\n');
        }
        else if (n < 0)
        {
            cout << "Invalid input. Please, enter a positive integer \n";
            cin.clear();
            cin.ignore(256, '\n');
        }
        else
        {
            continueLoop = false;
        }
    };

    // The function prints out the Fibonacci number for the input number (n)
    cout << "The Fibonacci number is " << n << endl;

    return 0;
};

// A function that determines, if a number is a Fibonacci number
int isFibonacci(int n)
{
    bool continueLoop = true;
    continueLoop = true;
    while (continueLoop)
    {
        cin >> n;
        if (cin.fail())
        {
            cout << "Invalid input. Please, enter an integer\n";
            cin.clear();
            cin.ignore(256, '\n');
        }
        else if (n < 0)
        {
            cout << "Invalid input. Please, enter a positive integer \n";
            cin.clear();
            cin.ignore(256, '\n');
        }
        else
        {
            continueLoop = false;
        };
        /* The value of the input number is compared to the requirements for a Fibonacci number.
    Depending on whether the requirements are met, a corresponding statement is printed. */
        if (n == (n - 1) + (n - 2))
        {
            cout << "Fibonacci number" << endl;
            ;
        }
        else
        {
            cout << "NOT a Fibonacci number" << endl;
        }
        return 0;
    };

    // Execution of the program
    int main()
    {
        // Definition of the repeatable value - it will be checked at the end of each execution cycle
        int repeatExec;
        do
        {
            findFibonacci(n);
            isFibonacci(n);
            cout << " Enter 1 to continue or 0 to quit: " << endl;
            cin >> repeatExec;
        } while (repeatExec == 1);
    }
