#include "ofApp.h"

void ofApp::setup(){
    
    myMusic1.load("City Rain.mp3");
    myMusic2.load("Heavy Rain.mp3");
    myMusic3.load("Rainforest Rain.mp3");
    
    myMusic1.play();
    ofEnableSmoothing();
    gui.setup();
    gui.add(colorR.setup("Color R", 29, 0, 255));
    gui.add(colorG.setup("Color G", 12, 0, 255));
    gui.add(colorB.setup("Color B", 99, 0, 255));
    gui.add(camDistance.setup("Camera Distance", 665, 665, 2000));
    gui.add(Amount.setup("Amount", 40, 1, 500));
    gui.add(Rain.setup("Rain", true));
    cam.enableMouseInput();
    
    gui.add(music1.setup("City Rain"));
    gui.add(music2.setup("Heavy Rain"));
    gui.add(music3.setup("Rainforest Rain"));
    
    snowImage.load("BGSnow.jpg");
    rainImage.load("BGRain.jpg");
    
}

void ofApp::update(){
    music();
    for (int i = 0; i < 2000; i++){
            if(Rain){
                drop[i].rainActive = true;
            }
        if(!Rain){
             drop[i].rainActive = false;
        }
    }
}

void ofApp::music(){
    
    if(music1){
        myMusic1.play();
        myMusic1.setLoop(true);
        myMusic2.stop();
        myMusic3.stop();
    }
    if(music2){
        myMusic2.play();
        myMusic2.setLoop(true);
        myMusic1.stop();
        myMusic3.stop();
    }
    if(music3){
        myMusic3.setLoop(true);
        myMusic3.play();
        myMusic1.stop();
        myMusic2.stop();
    }
}

void ofApp::draw(){
    cam.setDistance(camDistance);
    ofBackground(colorR, colorG, colorB);
    ofPushMatrix();
    cam.begin();
    ofTranslate(0, 300, 0);
    ofRotate(180, 0, 0, 0);

    
    for (int i = 0; i < Amount; i++){
        drop[i].fall();
        drop[i].show();

    }
    cam.end();
    ofPopMatrix();
    gui.draw();
}

