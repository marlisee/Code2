#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofBackground(226, 212, 175);
    
    xPos = ofGetWindowWidth() * 0.5;
    yPos = ofGetWindowHeight() * 0.5;
    
    Cat.load("/Users/marlise/Documents/Unity Projects/2017 Spring/Fear/Assets/CatSpook.jpg");

}

//--------------------------------------------------------------
void ofApp::update(){
    xPos += (mouseX - xPos) * 0.1;
    yPos += (mouseY - yPos) * 0.1;
    cout << mouseY << " " << yPos << endl;
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    Cat.draw(xPos, yPos, 50, 50);
    Cat.draw(xPos+10, yPos+10, 100, 100);
     Cat.draw(xPos+30, yPos+30, 70, 70);
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
    xPos = currentxPos;
    yPos = currentyPos;
    Cat.draw(currentxPos, currentyPos, 150, 150);

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
