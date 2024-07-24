#include "threeDShape.h"
#include  "pyramid.h"
int main(){
    //create an array out of the abstract base class threeDShape
    ThreeDShape* pyramids[2];
    
    //create 2 pyramids from your new pyramid class that extends threeDShape; 
    //pyramid 1 should use the default constructor and then setters to change the side values
    Pyramid* p1 = new Pyramid();
    p1->addSide(4.0);
    p1->addSide(3.0);
    p1->addSide(4.0);
    p1->calculateVolume();
    //pyramid 2 should use the parameterized constructor to change side values\
    float sides[] ={5.0,4.0,6.0}
    Pyramid* p2 = new Pyramid(5.0,3,sides,3,5.0,4.0,6.0);
    p2->calculateVolume();
    
    //Add pyramids to the abstract base class array
    pyramid[0]=p1;
    pyramid[1]=p2;
    //iterate through the pyramids in the array with a loop
    for(int i=0; i <2;i++){
    //Display the total volume of each pyramid in the array
        cout<< " total volume of each pyramid : " << i +1 << pyramid[i]->getVolume()<<endl;
    }
    delete p1;
    delete p2;
    
    return 0;    
}
