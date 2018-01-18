#include <iostream>
using namespace std;
// 4_Exercises-SectionA_2/Exercise 5

int main() {
    int a, b, c;
    a = 2, b = 3, c = 5;
    float x = a+b*c;
    float y = (a+b)*c;
    float z = a+(b*c);
    cout << "a = 2, b = 3, c = 5" <<endl;
    cout << "a+b*c = " << x <<endl;
    cout << "(a+b)*c = " << y<<endl;
    cout << "a+(b*c) = " << z<<endl;
    return 0;

}