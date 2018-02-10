#include <iostream>
// Section C/ Pointers/ Exercise2
void add(float a, float b, float &c)
{
    c = a+b;
}
int main() {
    float x, y;
    //const float z;
    float z;
    x = 10;
    y = 20;
    z =0;
    add(x,y,z);
    std::cout <<x<<y<<z;
}