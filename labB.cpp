/* Liene Putniņa, lr12022
B12. Given a natural number n. Find the Fibonachi number f(n). 
Create and use a function to calculate the Fibonachi number f(n). 
(Fibonachi numbers are f(1) = 1, f(2) = 1, f(n) = f(n-1) + f(n-2), t. i. f(3)=2, f(4)=3, f(5)=5 utt.). 
Also, check if the given number n is a Fibonachi number. 
Create and use a function for this check.
Program created at: 2021/25.03 */

#include <iostream>
using namespace std;

/* A recursive function finds the nth Fibonacci term.
It checks the entered number and returns the sum of the two previous numbers in
the Fibonacci sequence, if the number is not smaller or equal to 1 (0 and 1 ar the first two Fibonacci numbers) */
int findFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (findFibonacci(n - 1) + findFibonacci(n - 2));
    }

    return 0;
}

/* A function checks, if the entered number is a Fibonacci number.
It starts with 0 and 1, since those are the first two Fibonacci numbers.
They are added to each other to get their Fibonacci number.
Then a while loop is executed, which stops only when next is not smaller than the input number.
In each iteration the variables are assigned a new value thus incrementing the initial
number and getting to the next term in the Fibonacci sequence.
If next (each Fibonacci number) is equal to the input number, the input number IS a Fibonacci number.
If not, it is not a Fibonacci number.
*/
int isFibonacci(int n)
{
    int a, b, next;
    if (n <= 1)
    {
        cout << n << " is a Fibonacci number.\n";
    }
    else
    {
        a = 0;
        b = 1;
        next = a + b;

        while (next < n)
        {
            a = b;
            b = next;
            next = a + b;
        }

        if (next == n)
        {
            cout << n << " is a Fibonacci number.\n";
        }
        else
        {
            cout << n << " is NOT a Fibonacci number.\n";
        };
    }
    return 0;
};

/* Input validation in a function to keep the execution (main) function cleaner.
This function will be called each time an input is needed. */
int getIntInput()
{
    int inputNumber;
    bool continueLoop = true;
    while (continueLoop)
    {
        cin >> inputNumber;
        if (cin.fail())
        {
            cout << "Invalid input. Please, enter an integer\n";
            cin.clear();
            cin.ignore(256, '\n');
        }
        // Validation for negative numbers
        else if (inputNumber < 0)
        {
            cout << "Please, enter a positive non-zero integer\n";
        }
        else
        {
            continueLoop = false;
        }
    }

    return inputNumber;
}

/* A function for exercise one (finding the Fibonacci numbers).
This function deals with the input/output of the exercise and
executes the function to find the Fibonacci term for the input number.
*/
void exerciseOne()
{
    int n;
    cout << "Enter a number to get the nth Fibonacci term: ";
    // Input + validation of the input
    n = getIntInput();

    // The result of the function are saved in a variable for a cleaner cout block.
    int fibonacciNumber = findFibonacci(n);

    cout << "The fibonacci term Nr. " << n << " is " << fibonacciNumber << endl
         << endl;
}

/* A function for exercise one (checking if the input is a Fibonacci number).
This function deals with the input/output of the exercise and
executes the function to check if the input is a Fibonacci number.
*/
void exerciseTwo()
{
    int n;
    cout << "Enter a number to see if it is a part of the Fibonacci sequence: ";
    // Input + validation of the input
    n = getIntInput();

    isFibonacci(n);
}

// Execution of the program
int main()
{
    // Definition and initialization of the repeatable value - it will be checked at the end of each execution cycle
    int repeatExec = 0;
    do
    {
        exerciseOne();
        exerciseTwo();

        cout << "\nEnter 1 to continue or 0 to quit:\n"
             << endl;
        repeatExec = getIntInput();

    } while (repeatExec == 1);
}
