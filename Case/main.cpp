#include <iostream>
using namespace std;

//Section B/Choices/Exercise 4
int main() {

    {
        char in;
        cout << "Enter a letter: \n";
        cin >> in;
        switch (in){
            case 'a':
                cout << "a is for apple \n";
                break;
            case 'b':
                cout << "b is for banana \n";
                break;
            case 'c':
                cout << "c is for cranberry \n";
                break;
            case 'd':
                cout << "d is for date \n";
                break;
            default:
                cout << "I don't know any other fruit";
        }
    }

    return 0;
}