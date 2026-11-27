#include <iostream>
using namespace std;

int main()
{
    // Q1: What type of variable is used to store the input number?
    long long n;

    // Q2: Keep reading numbers until the input ends.
    while (cin >> n)
    {
        // Q3: What should the program do if the input number is 0?
        if (n == 0)
            break;

        // Q4: Continue processing while n has at least two digits.
        while (n >= 10)
        {
            // Q5: Reduce the number by adding the digits of n.
            // Hint:
            // n / 10 removes the last digit.
            // n % 10 gets the last digit.
            n = (n / 10) + (n % 10);
        }

        // Q6: Print the final one-digit result.
        cout << n << endl;
    }

    return 0;
}
