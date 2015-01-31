#pragma once

#include "ofMain.h"
#include "Satelite.h"
#include "Planet.h"
#include "ofxGui.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofEasyCam cam;
        //satelite sat;
        //ofPlanePrimitive plane1,plane2;
        //ofCylinderPrimitive cylinder;
        vector <satelite> satellites;
        Planet earth,moon,sun;

        ofxPanel gui;
    
    //vector <Planet> planets;
		
};