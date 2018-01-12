#include <iostream>
#include <string>

using namespace std;

int main(){
    int integer;
    char charac;
    float float_num;
    double precision;
    bool correct = true;

    cout << "Enter an interger" << endl;
    cin >> integer;
    cout << "Enter a letter" << endl;
    cin >> charac;
    cout << "Enter a decimal number" << endl;
    cin >> float_num;
    cout << "Enter a decimal number with 5 decimal places" << endl;
    cin >> precision;
    cout << "Enter 'true' or 'false'" << endl;
    cin >> correct;


    cout << integer << endl << charac << endl << float_num << endl;
    cout << precision <<endl << correct;
    return 0;

}

