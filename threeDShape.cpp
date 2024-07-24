#include "threeDShape.h"

ThreeDShape::ThreeDShape(){
    numSides = 0;
    volume = 0;
    maxSides = 100;
    sides = new sides[maxSides];
}
ThreeDShape::ThreeDShape(float v, int n, float* s,int m){
    numSides = n;
    volume = v;
    maxSides = m;
    sides = new sides[maxSides];
    for(int i =0; i < numSides; i++){
        sides[i] = s[i];
    }
}
ThreeDShape::ThreeDShape(const ThreeDShape& rhs){
    numSides = rhs.numSides;
    volume = rhs.volume;
    maxSides= rhs.maxSides;
    sides= new sides[maxSides];
    for(int i = 0; i < numSides; i++){
        sides[i] = rhs.sides[i];
    }
}

float ThreeDShape::getVolume(){
    return volume;
}
int ThreeDShape::getNumSides(){
    return numSides;
}
int ThreeDShape::getMaxSides(){
    return maxSides;
}
void ThreeDShape::addSide(float s){
    sides[numSides] = s;
    numSides ++;
}
float* ThreeDShape::getSides(){
    return sides;
}

void ThreeDShape::calculateVolume(){
    //There is no default way to calculate volume! Leaving blank...
}
