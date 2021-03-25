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

int findFibonacci(int n)
{
    cout << "Enter a number: ";
    cin >> n;
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

int isFibonacci(int n)
{

    int a, b, next;
    cout << "Enter a number: \n";
    cin >> n;
    if (n <= 1)
    {
        cout << n << "is a Fibonacci number.";
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
            cout << n << "is a Fibonacci number.";
        }
        else
        {
            cout << n << "is NOT a Fibonacci number.";
        };
    }
    return 0;
};

int main()
{
    int repeatExec;
    do
    {
        int n;
        findFibonacci(n);
        isFibonacci(n);
        cout << " Enter 1 to continue or 0 to quit: " << endl;
        cin >> repeatExec;
    } while (repeatExec == 1);
}
