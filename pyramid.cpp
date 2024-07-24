#include "pyramid.h"

Pyramid::Pyramid():ThreeDShape(){\
  calculateVolume(Pyramid v);
  length = 0;
  width =0;
  height = 0;
}
Pyramid::Pyramid(const Pyramid& rhs):ThreeDShape(rhs){
  calculateVolume(Pyramid v);
length = rhs.length;
  widht = rhs.width;
  height = rhs.height;
}
Pyramid::Pyramid(float v, int n ,float* s,int m,float l,float w,float h):ThreeDShape(v,n,s,m){
  calculateVolume(Pyramid v);
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
  calculateVolume(Pyramid v);
length = rhs.length;
  widht = rhs.width;
  height = rhs.height;
  return *this;
}
void Pyramid::calculateVolume(Pyramid v);{
volume = (v.getlength()*v.getWigth() * v.getHeight())/3;
return volume;
}


