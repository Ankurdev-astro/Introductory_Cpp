#include <iostream>

// Section C/ Pointers/ Exercise3
int main() {
    int array[10];
    for(int i=0;i<10;i++)
    {
        array[i] = i+1;
    }

    for(int j =0; j<10; j++)
    {
        std::cout << array[j]<< std::endl;
    }
    return 0;
}