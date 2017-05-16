

#pragma once
#include "ofMain.h"
#include "ofxGui.h"


class Raindrop{
public:
    Raindrop();
    void fall();
    void show();
    void start(); 
  
    float x;
    float y;
    float z;
    float len;
    float yspeed;
    float grav;
    float snowRadius;
    
    bool rainActive;
    
};
