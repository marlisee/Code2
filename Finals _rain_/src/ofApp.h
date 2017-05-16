#pragma once

#include "ofMain.h"
#include "Raindrop.hpp"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void music();
    
    
    Raindrop drop[2000];
    
    float tempZ;
    
    ofxPanel gui;
    ofxIntSlider colorR;
    ofxIntSlider colorG;
    ofxIntSlider colorB;
    ofxIntSlider camDistance;
    ofxFloatSlider Amount;
    ofxToggle Rain;
    
    
    ofxButton music1;
    ofxButton music2;
    ofxButton music3;
    
    
    ofSoundPlayer myMusic1;
    ofSoundPlayer myMusic2;
    ofSoundPlayer myMusic3;
    
    ofEasyCam cam;
    ofLight pointLight;
    
    ofImage snowImage;
    ofImage rainImage;
};

