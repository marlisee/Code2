#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetRectMode(OF_RECTMODE_CENTER);
    cam.setup(200, 200);
    backgroundtrack.load("music.mp3");
    
    backgroundtrack.play();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    cam.update();
//    xorig = ofGetWidth()/2;
//    yorig = ofGetHeight()/2;
    
    xorig = ofRandom(-ofGetWidth(), ofGetWidth());
    yorig = ofRandom(-ofGetHeight(), ofGetHeight());
    
    angle = ofGetElapsedTimef()*10;
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    //
    
    ofSetFrameRate(3);
    
    ofColor colorOne((ofRandom(0, 255)), ofRandom(0, 255), ofRandom(0, 255));
    ofColor colorTwo((ofRandom(0, 255)), ofRandom(0, 255), ofRandom(0, 255));
    //
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_LINEAR);
    
    
    ofSetFrameRate(60);
    
    ofPushMatrix();
    ofTranslate(ofRandom(-ofGetWidth()+ 100,ofGetWidth()-100),ofRandom(-ofGetHeight()-100, ofGetWidth()+100));
    ofRotateZ(ofGetElapsedTimef()*50);
    //    ofSetColor(0,0,0);
    //    ofRect(0,0,50,50);
    ofSetColor(249, 246, 182);
    cam.draw(0, 0);
    ofPopMatrix();
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
