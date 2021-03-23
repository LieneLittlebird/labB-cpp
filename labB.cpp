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
using namespace std;

int fibonacciNumbers()
{
    int count = 0;
    int inputNumber;
    int fiboNum;

    cout << "Enter the number of elements: \n";
    cin >> count;
    cout << "Enter " << count << " numbers: \n";

    for (int i = 0; i < count; i++)
    {
        cin >> inputNumber;

        if (inputNumber == (inputNumber - 1) + (inputNumber - 2))
        {
            cout << "Previous number - a Fibonacci number" << endl;
        }
    }

    return 0;
}

// Execution of the program
int main()
{
    // Definition of the repeatable value - it will be checked at the end of each execution cycle
    int repeatExec;
    do
    {
        fibonacciNumbers();
        cout << " Enter 1 to continue or 0 to quit: " << endl;
        cin >> repeatExec;
    } while (repeatExec == 1);
}
