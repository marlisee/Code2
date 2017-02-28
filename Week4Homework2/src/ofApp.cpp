//followed lewis lepton's tutorial on youtube: https://www.youtube.com/watch?v=wkOppaMIsbw&index=40&list=PL4neAtv21WOmrV8z9rSzL20QpdLU1zJLr


#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(positionX.set("X", 0.0, 0.0, 30.0));
    gui.add(positionY.set("Y", 0.0, 0.0, 30.0));
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    gui.draw();
    
    ofSetColor((ofRandom(0, 255)), ofRandom(0, 255), ofRandom(0, 255));
    float time = ofGetElapsedTimef();
    for(int i=0; i<100; i++){
        
        float width = ofGetWidth();
        float height = ofGetHeight();
        float speed = 0.1;
        float posX = i * positionX;
        float posY = i * positionY;
        
        float x = width * ofNoise(time * speed + posX);
        float y = height * ofNoise(time * speed + posY);
        
        ofCircle(x, y, 20);
        
    }
    
    ofDrawBitmapString("time: " + ofToString(ofGetElapsedTimef()), 30, 30);

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
