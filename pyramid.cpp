#include "pyramid.h"

Pyramid::Pyramid():ThreeDShape(){\
  calculateVolume();
  length = 0;
  width =0;
  height = 0;
}
Pyramid::Pyramid(const Pyramid& rhs):ThreeDShape(rhs){
  calculateVolume();
length = rhs.length;
  widht = rhs.width;
  height = rhs.height;
}
Pyramid::Pyramid(float v, int n ,float* s,int m,float l,float w,float h):ThreeDShape(v,n,s,m){
  calculateVolume();
length = l;
  width = w;
  height = h;
}
float Pyramid::getLength(){
  return length;
}
float Pyramid::getWidth(){
return width;
}
float Pyramid::getHeight(){
  return height;
}
Pyramid::~Pyramid(){
}
Pyramid & Pyramid:operator=(const Pyramid& rhs){
  calculateVolume();
length = rhs.length;
  widht = rhs.width;
  height = rhs.height;
  return *this;
}
void Pyramid::calculateVolume();{
volume = (length*width*height)/3.0;
}


