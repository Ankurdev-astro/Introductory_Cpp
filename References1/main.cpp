#include <iostream>
using namespace std;
// Section C/ Pointers/ Exercise1
int main() {
    cout << "Enter an integer: \n";
    int p;
    cin >> p;
    cout << p <<endl;
    int &x = p; // x is now a reference variable to p
    cout << &x <<endl << x <<endl; //&x is the address
    p =  p + 10;
    cout << p << " " << x;


}