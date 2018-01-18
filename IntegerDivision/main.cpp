#include <iostream>
#include <string>
//4_SimpleExercises-SectionA_2/Exercise 3
using namespace std;

int main() {
    int a,b; // declaration of variables
    cout << " Enter an integer" << endl;
    cin >> a;
    cout << " Enter another integer" << endl;
    cin >> b;
    float f;
    float g;
    f = a; // forcing conversion
    g = f/b;
    cout << "The value of integer1/integer2 = " << g;
    return 0;

}