#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
//Section C/ Strings,Vectors,Iterators/ Ex 3
int main() {
    float j;
    vector<float> Vec;
    ifstream fileRead("D:/Cpp files/Notes/num.txt");
    while(fileRead.eof()==0)
    {
        fileRead >> j;
        Vec.push_back(j);
    }

    Vec.pop_back();
    sort(Vec.begin(),Vec.end());
    for(auto i: Vec)
    {
        cout << i <<endl;
    }
    return 0;
}