#include <iostream>
using namespace std;

//Section B/ Hw/ Exercise 6

int main() {
    int num,i, n=12,val;
    //cout << "Enter an integer" << endl ;
    cin >> num;
    for(i=1;i<=n;i++)
    {
        val = i*num;
        cout << i << " x " << num << " = " << val << endl;
    }
    return 0;
}
