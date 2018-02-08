#include <iostream>
#include <fstream>
using namespace std;
// Section C/ SimpleIO/ Ex2
int main() {
    float i, sum=0;
    //std::string input;
    ifstream  Input("G:/Cpp2018/numbers.dat"); // makes Input object and opens file
    while (Input.eof()== 0)
    {
        Input >>i;
        //Input >> input;
        //cout << input;
        sum += i;
    }

    float avg = float(sum)/10;
    //cout << avg;
}