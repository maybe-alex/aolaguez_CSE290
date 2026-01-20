#include "Square.h"
#include <iostream> 

int main () {
Square c;

c.setLength(5);
c.setWidth(10);
double resultArea = 0;
resultArea = c.calculateArea();

    return 0;
}