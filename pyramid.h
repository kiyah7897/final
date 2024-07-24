#ifndef PYRAMID_H
#define PYRAMID_H

#include "threeDShape.h"
#include <iostream>

class Pyramid : public ThreeDShape{
float length , width, height;
public :
Pyramid();
Pyramid(const Pyramid& rhs);
Pyramid(float v, int n, float* s,int m,float l,float w, float h);

float getLength();
float getWidth();
float getHeight();
~Pyramid();
Pyramid& operator=(const Pyramid& rhs);

void calculateVolume();
};
#endif
