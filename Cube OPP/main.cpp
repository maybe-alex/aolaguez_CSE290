#include "Cube.h"
#include <iostream>
using namespace std;

int main() {
    Cube c;

    c.setLength(3.0);
    c.setWidth(4.0);
    c.setHeight(5.0);
    double resultArea = 0;
    resultArea = c.calculateArea();
    cout << "The area of the cube is: " << resultArea << endl;

    return 0;
}