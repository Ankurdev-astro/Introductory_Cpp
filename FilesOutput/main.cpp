#include <iostream>
# include <fstream>
using namespace std;

int main() {

    ofstream output("G:/Cpp2018/numbers.dat");
    for (int i =0;i<10;i++)
    {
        float x0;
        cin >> x0;
        output << x0;
    }



}