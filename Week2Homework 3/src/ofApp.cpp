#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    ofSetBackgroundColor(1);
}

//--------------------------------------------------------------
void ofApp::update() {
}


//--------------------------------------------------------------

void ofApp::draw() {
    yPos = yPos + 10;
    ofDrawEllipse(100,yPos,50,30);
    ofDrawEllipse(160,yPos,ofRandom(10,1680),30);
    ofDrawEllipse(1600,yPos,ofRandom(10,1680),ofRandom(700,1000));
    ofDrawEllipse(700,yPos+150,ofRandom(10,700),ofRandom(500,1000));
    ofDrawEllipse(800,yPos,ofRandom(10,870),ofRandom(40, 100));

  
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
 
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
    
}

//--------------------------------------------------------------
void ofApp::resized(int w, int h) {
    
}
