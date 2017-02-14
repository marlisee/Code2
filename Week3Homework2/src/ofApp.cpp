#include "ofApp.h"

//i followed this tutoral by Lewis Lepton: https://www.youtube.com/watch?v=i31fSjovpu0

//--------------------------------------------------------------
void ofApp::setup(){
    
    gui.setup();
    gui.add(sinParam.set("SINE", 0.0, 0.0, 300.0));
    gui.add(cosParam.set("COSINE", 0.0, 0.0, 300.0));
}

//--------------------------------------------------------------
void ofApp::update(){
    sine = sin(ofGetElapsedTimef() * 2.0) * sinParam;
    cose = cos(ofGetElapsedTimef() * 2.0 * cosParam);

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofColor colorOne(193, 255, 235);
    ofColor colorTwo(181, 237, 255);
    
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_CIRCULAR);
    
    gui.draw();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofCircle(sine * sin(ofGetElapsedTimef()*10), cose * cos(ofGetElapsedTimef() * 5), 40);

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
