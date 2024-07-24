#ifndef PYRAMID_H
#define PYRAMID_H

#include "threeDShape.h"
#include <iostream>

class Pyramid : public ThreeDShape{
int length , width, height;
public :
Pyramid();
Pyramid(const Pyramid& rhs);
Pyramid(float v, int n, float* s,int m,int l,int w, int h);

int getLength();
int getWidth();
int getHeight();
~Pyramid();
Pyramid& operator=(const Pyramid& rhs);

void calculateVolume();
};
#endif
