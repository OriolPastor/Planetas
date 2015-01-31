#include "testApp.h"

#include "Satelite.h"

//#include "Planet.h"

//--------------------------------------------------------------
void testApp::setup(){

   
    
    //copia
    satellites.resize(2);
    
    for(int i=0;i<satellites.size();i++){
        satellites[i].setup();
        satellites[i].orbit(earth, 700,90*i);
        //satellites[i].orbit(moon, 700,90*i);
    }
    
    
    earth.setup("images/earth.jpg",600,"earth");
    earth.orbit(sun, 8000,0,10);
    
    moon.setup("images/moon.jpeg",70,"moon");
    moon.orbit(earth, 1000,180,60);
    

    sun.setup(ofColor::yellow,1000,"sun");
    
    //sun.setup(textura,1000,"sun");
    
    
    gui.setup("settings");
    gui.add(sun.parameters);
    gui.add(earth.parameters);
    gui.add(moon.parameters);
    
    
    //cambiar
    cam.setVFlip(true);
    //cam.setFov(60);
    //cam.setNearClip(1);
    cam.setDistance(15500);
    cam.setFarClip(30000);
    ofBackground(0);
}

//--------------------------------------------------------------
void testApp::update(){
    for(int i=0;i<satellites.size();i++){
        satellites[i].update();
        //satellites[i].move(1, 1, 1);
    }
    earth.update();
    moon.update();
    sun.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofEnableDepthTest();
    
    cam.begin();
    
    earth.draw();
    moon.draw();
    sun.draw();
    
    
    
    for(int i=0;i<satellites.size();i++){
        
        satellites[i].draw();

        
    }
       // plane.drawWireframe();
    
    
    cam.end();
    //abans de dibuixar el gui
    ofDisableDepthTest();
    gui.draw();
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
