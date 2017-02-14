//
//  Noise.cpp
//  Week3Homework3
//
//  Created by Marlise Chu on 13/2/2017.
//
//

#include "Noise.hpp"

Noise:: Noise(){

}

void Noise:: draw(){
    ofBackground(0,0,0);
    ofSetColor(255);
    
    ofNoFill();
    ofBeginShape();
    for (int i = 0; i < ofGetWidth(); i++){
        float x = i;
        float noise = ofNoise(i/(10.0));
        float y = ofMap(noise, 0,1, 0, 700);
        ofVertex(x,y);
    }
    ofEndShape();
}

