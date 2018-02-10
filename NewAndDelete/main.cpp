#include <iostream>
using namespace std;
// Section C/ Pointers/ Exercise 5
int main() {
    cout << "Enter an integer \n";
    int size;
    cin >> size;
    // int a[size]; //dynamic array works even with new?
    int *a = new int [size];
    for(int i=0;i<size; i++)
    {
        a[i]= i +1;
    }
    for(int i=0;i<size; i++)
    {
        cout << a[i];
    }

    delete[] a;

   cout << endl << a[0] ;
   cout << endl << a[1] ;
   cout << endl << a[2] ;
   cout << endl << a[9] ;
}