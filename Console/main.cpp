#include <iostream>
#include <string>

using namespace std;

int main(){
    int i = 0;
    cout << "Enter an integer: " << endl;
    cin >> i;
    cout << "The number you entered was: "<< i<<endl;
    string str;
    cout << "Enter a word: " << endl;
    cin >> str;
    cout << "The word you entered was: "<< str << endl; // if we enter 2 words,
                                                        // the second word is dropped
    return  0;
}
