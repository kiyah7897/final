#ifndef THREEDSHAPE_H
#define THREEDSHAPE_H

class ThreeDShape{
protected:
    float volume;
    int numSides; 
    float* sides;
    int maxSides;
    public:
        ThreeDShape();
        ThreeDShape(float, int, float*,int);
        ThreeDShape(const ThreeDShape&);

        float getVolume();
        int getNumSides();
        int getMaxSides();
        void addSide(float);
        float* getSides();
    ThreeDShape& operator=(const ThreeDShape& rhs);
~ThreeDShape();
        void calculateVolume()=0;
};
#endif
