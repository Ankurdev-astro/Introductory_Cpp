#include <vector>
#include <iostream>
#include <fstream>
using namespace std;  //required for vector
// Section C/ Strings,Vectors,Iterators/ Ex 1

int main() {
    float i, sum=0;
    vector <float> NewVec; // declaring a vector
    ifstream InputFile("D:/Cpp files/Notes/num.txt");
    while (InputFile.eof()==0)
    {
        InputFile >>i;
        NewVec.push_back(i);
    }
    InputFile.close();
    NewVec.pop_back(); //removes extra eof line/character

    for (int i=0, n = NewVec.size(); i<n; i++)
    {
        sum += NewVec[i];
    }

    float avg = float(sum)/NewVec.size();
    cout << avg;
    return 0;
}