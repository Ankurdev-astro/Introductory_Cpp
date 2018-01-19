#include <iostream>
using namespace std;
// Exercise 1/Loops/SectionB

int main() {

    int i;
    int n=10;
    cout << "Printing 1-10 using for loop: \n";
    for(i=1;i<=n;++i)
        {
            cout << i << endl;
        }
    cout << "Printing 1-10 using while loop: \n";
    i=1;
    while(i<=10)
        {
            cout << i << endl;
            i++;
        }

    cout << "Printing 1-10 using do-while loop: \n";
    i=1;
    do
        {
            cout << i << endl;
            i++;
        }while(i<=10);

    cout << "Printing 10 to 1 using for loop: \n";
    for(i=10;i>0;i--)
        {
            cout << i << endl;
        }
    cout << "Printing 10 to 1 using while loop: \n";
    i=10;
    while(i>0)
        {
            cout << i << endl;
            i--;
        }
    cout << "Printing 10 to 1 using do-while loop: \n";
    i=10;
    do
        {
            cout << i << endl;
            i--;
        }while(i>0);

}
