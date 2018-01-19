#include <iostream>
using namespace std;
//Section B/Choices/Exercise 3

int main() {
    char input;
    cout <<"Enter a single character: \n";
    cin >> input;
    if(input == 'a')
        {
            cout << "a is for apple \n";
        }
    else if(input == 'b')
        {
            cout << "b is for banana \n";
        }
    else if(input == 'c')
    {
        cout << "c is for cranberry \n";
    }
    else if(input == 'd')
    {
        cout << "d is for date \n";
    }
    else
        {
            cout << "I don't know any other fruit \n";
        }
}

