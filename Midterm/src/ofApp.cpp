//present this

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(60);

    myMusic.load("forsaken.mp3");
    myMusic1.load("imsorry.mp3");
    myMusic2.load("classical.mp3");
    
    myMusic.play();
    myMusic.setLoop(false);
    
    
    gravity = ofVec2f( 0.f, .075f);
    
    //background gradient script from cerupcat on OF forum
    
    last = ofGetElapsedTimeMillis();
    col.setHsb(0,255,255);
    col2.setHsb(0,255,255);
    col3.setHsb(0,255,255);
    counter = 0;
    

    
}

//--------------------------------------------------------------
void ofApp::update(){
    
//    myMusic1.isPlaying();
//    
//   if (myMusic.isPlaying()==false){
//       myMusic1.play();
//    }
//    if(myMusic.isPlaying() == false && myMusic1.isPlaying() == false){
//        myMusic.play();
//    }
    
    cout << "framerate: " << ofGetFrameRate() << endl;


    if(ofGetElapsedTimeMillis() - last > 50){
        
        col.setHue(counter % 256);
        col2.setHue((counter + 20) % 256);
        col3.setHue((counter + 160) % 256);
        counter += 1;
        last = ofGetElapsedTimeMillis();
    }
    
    float x = ofRandom(0,ofGetWindowWidth());
    particleSystem myParticleSystem(ofVec2f(x,-10.f));
    mySystems.push_back(myParticleSystem);
    for(int i = 0; i <mySystems.size(); i++){
        mySystems[i].update(gravity);
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //the points to draw 2 - fullscreen rectangle
    const GLfloat vertices[] = {
        0, 0,
        static_cast<GLfloat>(ofGetWidth()), 0,
        0, static_cast<GLfloat>(ofGetHeight()),
        static_cast<GLfloat>(ofGetWidth()), static_cast<GLfloat>(ofGetHeight()),
    };
    
    //the colors to map to the vertices
    const GLubyte colors[] = {
        col.r, col.g, col.b, 120,
        col2.r, col2.g, col2.b, 120,
        col3.r, col3.g, col3.b, 120,
    };
    
    //draw the vertices with color
    glVertexPointer(2, GL_FLOAT, 0, vertices);
    glEnableClientState(GL_VERTEX_ARRAY);
    glColorPointer(4, GL_UNSIGNED_BYTE, 0, colors);
    glEnableClientState(GL_COLOR_ARRAY);
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    
    //reset
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisableClientState(GL_COLOR_ARRAY);


    for(int i=0; i < mySystems.size(); i++){
        mySystems[i].draw();
    }
    
}

void ofApp::keyPressed(int key){
    if(key == '1'){
        myMusic.play();
        myMusic1.stop();
        myMusic2.stop();
    }
    
    if(key == '2'){
        myMusic.stop();
        myMusic1.play();
        myMusic2.stop();
    }
    
    if(key == '3'){
        myMusic.stop();
        myMusic1.stop();
        myMusic2.play();
    }
}



