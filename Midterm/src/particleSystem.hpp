#pragma once
#include "ofMain.h"
#include "particle.hpp"

class particleSystem{
public:
    particleSystem(ofVec2f pos);
    float a = 0;
    float frequency = 1; 
    
    void update(ofVec2f force);
    void draw();
    void setup();
    
    void audioIn(float * input, int bufferSize, int nChannels);
    
    
    vector<particle> myParticles;
    
    const int MAX_SIZE = 1;
    ofVec2f myPos;
    
    vector <float> left;
    vector <float> right;
    vector <float> volHistory;

    int 	bufferCounter;
    int 	drawCounter;
    
    float smoothedVol;
    float scaledVol;
        
    ofSoundStream soundStream;
    
    float SoundFrequency;

};
