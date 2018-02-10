#include <vector>
#include <iostream>
#include <fstream>
using namespace std;  //required for vector
// Section C/ Strings,Vectors,Iterators/ Ex 2

int main() {
    float j, sum=0;
    vector <float> NewVec; // declaring a vector
    ifstream InputFile("D:/Cpp files/Notes/num.txt");
    while (InputFile.eof()==0)
    {
        InputFile >>j;
        NewVec.push_back(j);
    }
    InputFile.close();
    NewVec.pop_back(); //removes extra eof line/character
/*
    for (vector<float>::const_iterator i = NewVec.begin();
            i != NewVec.end(); i++)
    {
        sum += *i; //i is the iterator, accesses the vector elements
    }
*/
    for (auto i:NewVec)
    {
        sum += i;
    }
    float avg = float(sum)/NewVec.size();
    cout << avg;
    return 0;
}
