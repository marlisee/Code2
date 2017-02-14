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
    xorig = ofGetWidth()/2;
    yorig = ofGetHeight()/2;
    angle = ofGetElapsedTimef()*10;
    x = xorig + radius * cos(angle);
    y = yorig + radius * sin(angle);
    
    radius = radius - 0.1;
    
    if (radius < 10){
        radius = radius + 0.1;
    }
    
    if (radius > 40){
        radius = radius - 0.1;
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
//    
    ofColor colorOne(162, 217, 239);
    ofColor colorTwo(162, 239, 192);
//
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_LINEAR);
    
    
   

    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    ofRotateZ(ofGetElapsedTimef()*100);
//    ofSetColor(0,0,0);
//    ofRect(0,0,50,50);
    cam.draw(0, 0);
    ofPopMatrix();
    
    
    ofSetColor(237, 239, 162);
    ofCircle(x, y, radius);
    

    
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
