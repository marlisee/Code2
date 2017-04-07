#include "particleSystem.hpp"


particleSystem::particleSystem(ofVec2f pos){
    myPos = pos;
}

void particleSystem::setup(){
    
}

void particleSystem::update(ofVec2f force){
    
//    cout << "frequency: " << frequency << endl;
    
    ofSoundGetSpectrum(SoundFrequency);
    frequency = ofMap(SoundFrequency, 1, 512, 2, 5);
    
    if(a<ofGetWindowHeight()){
        a+=0.01;
    }
   if(myParticles.size() < MAX_SIZE){
        particle myParticle(myPos);
        myParticles.push_back(myParticle);
    }
    
    for(int i = 0; i <myParticles.size(); i++){
        myParticles[i].applyForce(force);
        float distance = (myParticles[i].myPos - myPos).length();
       float changeInVel = ofMap(distance, 0, ofGetWindowHeight()+10 - a, frequency, 0);
        
        myParticles[i].update(changeInVel);
    }
    
}

void particleSystem::draw(){
    for(int i=0; i < myParticles.size(); i++){
        myParticles[i].draw();
    }
    
}

//void particleSystem::audioIn(float * input, int bufferSize, int nChannels){
//    
//    float curVol = 0.0;
//    int numCounted = 0;
//    
//    //calculate the root mean square to calculate volume
//    for (int i = 0; i < bufferSize; i++){
//        left[i]		= input[i*2]*0.5;
//        right[i]	= input[i*2+1]*0.5;
//        
//        curVol += left[i] * left[i];
//        curVol += right[i] * right[i];
//        numCounted+=2;
//    }
//    
//    //get the mean of rms
//    curVol /= (float)numCounted;
//    
//    //get the root of rms
//    curVol = sqrt( curVol );
//    
//    smoothedVol *= 0.93;
//    smoothedVol += 0.07 * curVol;
//    
//}
