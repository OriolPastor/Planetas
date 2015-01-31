//
//  Planet.cpp
//  nodes
//
//  Created by Oriol on 12/11/13.
//
//

#include "Planet.h"


Planet::Planet()
{
    planet = NULL;
    parameters.add(orbitRadius.set("orbitRadius",0,1,8000));
    parameters.add(offset.set("offset",0,0,360));
    parameters.add(speed.set("speed",0,0,360));
    
    
    //mirar ofMap
    //ofMap(.5,orbitRadius.getMin(),orbitRadius.getMax());
    
}



Planet::~Planet()
{
    
}

void Planet::setup(string texturePath, float radius, string planetName){
  
    sphere.set(radius,60);
    
    texture.loadImage(texturePath);
    
    sphere.mapTexCoordsFromTexture(texture.getTextureReference());
    parameters.setName(planetName);
    

    
}

void Planet::setup(ofColor _color, float radius, string _planetName){
    
    sphere.set(radius,60);
    color= _color;
    
    parameters.setName(_planetName);
    
}


void Planet::setup(ofTexture &textura, float radius, string _planetName){
    
    sphere.set(radius,60);
    sphere.mapTexCoordsFromTexture(textura);
    parameters.setName(_planetName);
    
}




void Planet::update(){
    if (planet){
        // si tenim problemes valors gui float(speed)
        float longitude= fmod(ofGetElapsedTimef()*speed+offset,360);
        sphere.orbit(longitude,0,orbitRadius,planet->getPosition() );
    }
    
}

void Planet::draw(){
    if(texture.isAllocated()) texture.bind();
    
    else ofSetColor(color);
       
    sphere.draw();
    
    if(texture.isAllocated()) texture.unbind();
    else ofSetColor(255);

}

ofVec3f Planet:: getPosition(){
    return sphere.getPosition();
}

void Planet:: orbit(Planet & _planet, float _radius, float _offset, float _speed){
    
    planet= &_planet;
    orbitRadius= _radius;
    offset= _offset;
    speed= _speed;
    
    
}


