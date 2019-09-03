//
//  Particle.hpp
//  oF_fireworks
//
//  Created by Jung-Wook Park on 04/09/2019.
//
#include <stdio.h>
#include "ofMain.h"

class Particle {
private:
    ofVec2f loc;
    ofVec2f vel;
    ofVec2f acc;
    
public:
    Particle(int x, int y) {
        loc.set(x, y);
        vel.set(0, -10);
        acc.set(0, 0.2);
    }
    
    
    
    void update(){
        vel += acc;
        loc += vel;
        
    }
    
    void show(){
        ofSetColor(255);
        ofDrawCircle(loc, 5);
    }
    
};
