#include <iostream>
using namespace std;

// Exercise 2/Even/Section B
int main() {
    int i;
    int n =20;
    for(i=1;i<=n;i++)
        {
            cout << i << "  ";
            if (i%2 == 0)
                cout << "Even" << endl;
            else
                cout << "Odd" << endl;
        }
}
