//
//  Satelite.h
//  nodes
//
//  Created by Oriol on 11/11/13.
//
//


#ifndef __nodes__Satelite__
#define __nodes__Satelite__

#include <iostream>
#include "ofMain.h"

#include "Planet.h"

//ficar que es un node o que dintre contingui node

//class satelite: public ofNode

class satelite
{
public:
    satelite();
    virtual ~satelite();
    
    void setup();
    void update();
    void draw();
    
    void orbit(Planet & planet, float radius, float offset);
    
protected:

private:
    ofPlanePrimitive plane1,plane2;
    ofCylinderPrimitive cylinder;
    //ficar un node x objecte aqui i utilitzar els seus metodes
    ofNode node;
    Planet * planet;
    float radius;
    float offset;
    
    
};

#endif /* defined(__nodes__Satelite__) */
