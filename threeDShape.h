#ifndef THREEDSHAPE_H
#define THREEDSHAPE_H

class ThreeDShape{
    float volume;
    int numSides; 
    float sides[100];
    public:
        ThreeDShape();
        ThreeDShape(float, int, float*);
        ThreeDShape(const ThreeDShape&);

        float getVolume();
        int getNumSides();
        void addSide(float);
        float* getSides();
        void calculateVolume();
};
#endif