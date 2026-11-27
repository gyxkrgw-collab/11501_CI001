#include <iostream>
using namespace std;

int main() {
    // Q1: How many test cases are there?
    int t,i;

    // Q2: Read the number of test cases.
    cin >> t;

    // Q3: Repeat the following process t times.
    for (i=0;i<t;i++) {
        // Q4: Read the three salaries.
        int a, b, c;
        cin >> a >> b >> c;

        // Q5: Use comparisons to find the median salary.
        // The median is the value that is neither the largest nor the smallest.
        if ((a>b && b>c) || (c>b && b>a)) {
            cout << "Case " << i << ": " << b << endl;
        } else if ((b>a && a>c) || (c>a && a>b)) {
            cout << "Case " << i << ": " <<a << endl;
        } else {
            cout << "Case " << i << ": " <<c << endl;
        }
    }

    // Q6: What value should main() return when the program finishes successfully?
    return 0;
}
