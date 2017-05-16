#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofLoadVideo(vidTexture, "Obama.mp4"); 
    video.load("Obama.mp4");
    ofEnableDepthTest();
    ofSetVerticalSync(true);
    
    cam.setDistance(160);

}

//--------------------------------------------------------------
void ofApp::update(){

    video.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    ofSetHexColor(0xffffff);
    
    cam.begin();
    
    ofSetColor(255, 0, 150);
    ofFill();
    ofDrawBox(100);
    
    cam.end();

    
    video.draw(ofGetWindowWidth()/4, ofGetWindowHeight()/4);
    video.play();
    

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
