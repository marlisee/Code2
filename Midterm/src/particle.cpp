#include "particle.hpp"

particle::particle(ofVec2f pos){
    myPos = pos;
    myVel = ofVec2f(ofRandom(-.75f, .75f), ofRandom(-.75f, .75f));
    myLifeSpan = ofRandom(0,INTIAL_LIFE_SPAN);
}

void particle::update(float changeInVel){
    
    myVel += myAccel;
    myPos += myVel * changeInVel;
    
    
}
void particle::draw(){
    
    ofSetColor(255,255,255);
    size = ofMap(myLifeSpan, 0, 100, 0, 5);
    
    ofDrawCircle(myPos, size);

}
void particle::applyForce(ofVec2f force){
    myAccel = force;
}

