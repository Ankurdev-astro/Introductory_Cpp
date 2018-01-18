#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// 4_Exercises-SectionA_2/Exercise 4
int main() {
    int a = 10, b = 6;
    int sum, subs, mul, rem;
    float div;
    sum = a+b;
    subs = a-b;
    mul = a*b;
    div = float(a)/b;
    rem = a%b;
    cout << "The sum of 10 and 6 is " << sum << endl;
    cout << "The difference between 10 and 6 is " << subs <<endl;
    cout << "10 times 6 give " << mul << endl;
    cout << "10 divided by 6 is " << div << endl;
    cout << "The remainder when 10 is divided by 6 is " << rem << endl;
    return 0;

}
