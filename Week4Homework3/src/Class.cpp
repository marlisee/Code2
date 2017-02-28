//code reference from https://masteringof.wordpress.com/examples/perlin-noise/

//
//  Class.cpp
//  Week4Homework3
//
//  Created by Marlise Chu on 27/2/2017.
//
//

#include "Class.hpp"


void Class:: setup(){
    
    
}
void Class:: draw(){

    ofBackground( 255, 255, 255 );
    float time = ofGetElapsedTimef();
    
    float scaleX = 0.007;
    float scaleY = 0.008;
    
    float posX0 = 593.2;
    float posY0 = 43.7;
    
    for (int y=0; y<500; y++) {
        for (int x=0; x<500; x++) {
            float value = ofNoise( x*scaleX + posX0, y*scaleY + posY0 );
            ofSetColor((ofRandom(0, 255)), ofRandom(0, 255), ofRandom(0, 255));
            ofRect(x, y, 1, 1);
        }
    }

    }
