
#include "Raindrop.hpp"

Raindrop::Raindrop(){
    x  = ofRandom(-ofGetWindowWidth(), ofGetWindowWidth());
    y  = ofRandom(-500, -50);
    z  = ofRandom(0, 20);
    len = ofMap(z, 0, 20, 10, 20);
    yspeed  = ofMap(z, 0, 20, 10, 20);
    snowRadius = ofRandom(1, 5);
}

void Raindrop::start(){
    rainActive = true;
}
void Raindrop::fall(){
    y = y + yspeed;
    grav = ofMap(z, 0, 20, 0, 0.2);
    yspeed = yspeed + grav;
    
    if (y > ofGetWindowHeight()) {
        y = ofRandom(-400, -100);
        yspeed = ofMap(z, 0, 20, 7, 15);
    }
}

void Raindrop::show(){
    float thick = ofMap(z, 0, 20, 1, 5);
    ofSetLineWidth(thick);
    if(rainActive){
        ofSetColor(255, 255, 255);
        ofDrawLine(x, y, x, y+len);
    }
    if(!rainActive){
        ofSetColor(255, 255, 255);
        ofDrawSphere(x, y, snowRadius);
    }
}
