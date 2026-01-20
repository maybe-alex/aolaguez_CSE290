#include "Cube.h"

void Cube::setLength(double length) {
    length_ = length;
}

void Cube::setWidth(double width) {
    width_ = width;
}

void Cube::setHeight(double height) {
    height_ = height;
}   

double Cube::calculateArea () {
    return length_ * width_ * height_;
}