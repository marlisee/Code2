#pragma once

#include "ofMain.h"
#include "particleSystem.hpp"



class ofApp : public ofBaseApp{
    
public:
    
    float a = 0;
    
    void setup();
    void update();
    void draw();
 
    void keyPressed(int key);
        
    
    //vector<float> myFloats;
    
    const int MAX_SIZE = 1;
    
    vector<particleSystem> mySystems;
    
    ofVec2f gravity;
    
    unsigned long last;
    int counter;
    ofColor col;
    ofColor col2;
    ofColor col3;
    
    ofSoundPlayer myMusic;
    ofSoundPlayer myMusic1;
    ofSoundPlayer myMusic2;

    float smoothedVol;
    float scaledVol;
    

};
