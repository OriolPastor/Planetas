//
//  Satelite.cpp
//  nodes
//
//  Created by Oriol on 11/11/13.
//
//

#include "Satelite.h"

satelite::satelite(){
    planet = NULL;
    radius=0;
 
}

satelite::~satelite(){
    
    
}


void satelite::setup(){
    
    //el pare es el satelit
    //si fem herencia
    //plane1.setParent(*this);
    //plane2.setParent(*this);
    //cylinder.setParent(*this);
    
    plane1.setParent(node);
    plane2.setParent(node);
    cylinder.setParent(node);
    
    
    
    plane1.set(30, 20);
    plane2.set(30, 20);
    cylinder.set(15,60,3,3);
    
    plane1.setPosition(-30, 0,0);
    plane2.setPosition(30, 0,0);
   
  

    
}

void satelite::update(){
    float longitude= fmod(ofGetElapsedTimef()*10+offset,360);
    node.orbit(longitude,0,radius,planet->getPosition() );
    

    
}
void satelite::draw(){
    
    plane1.draw();
    plane2.draw();
    cylinder.draw();
    
}


void satelite:: orbit(Planet & _planet, float _radius, float _offset){
    
    planet= &_planet;
    radius= _radius;
    offset= _offset;
    
    
}


