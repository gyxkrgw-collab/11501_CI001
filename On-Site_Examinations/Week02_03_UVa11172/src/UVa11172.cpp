#include <iostream>
using namespace std;

int main() {
    // Q1: What variables are needed for this task?
    int i,a,b,t;

    // Q2: How many test cases are there?
    cin >> t;

    // Q3: Use a loop that runs exactly t times.
    for (i=0;i<t;i++) {
        // Q4: Read the two integer values to compare.
        cin >> a >> b;

        // Q5: Use comparison to decide the relationship between a and b.
        // Complete the if/else structure below.
        if (a>b) {
            cout << ">"<<endl;
        }
        else if(a<b){
            cout<<"<"<<endl;
        }
        else{
            cout << "="<<endl;
        }
    }

    // Q8: What should main() return when the program finishes successfully?
    return 0;
}
