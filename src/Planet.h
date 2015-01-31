//
//  Planet.h
//  nodes
//
//  Created by Oriol on 12/11/13.
//
//

#ifndef __nodes__Planet__
#define __nodes__Planet__

#include <iostream>
#include "ofMain.h"


class Planet
{
public:
    Planet();
    virtual ~Planet();
    void setup(string texturePath,float radius, string planetName);
    void setup(ofColor color,float radius,string _planetName);
    
    void setup(ofTexture &texture,float radius,string _planetName);
    
    void update();
    void draw();
    
    ofVec3f getPosition();
 
    void orbit(Planet & planet, float radius, float offset, float speed);
    
    //GUI
    
    ofParameter<float> orbitRadius;
    ofParameter<float> offset;
    ofParameter<float> speed;
    
    ofParameterGroup parameters;
    
    
    
    
    
    
private:
    ofSpherePrimitive sphere;
    ofTexture textura;
    ofImage texture;
    Planet * planet;
    ofColor color;
    
};


#endif /* defined(__nodes__Planet__) */
