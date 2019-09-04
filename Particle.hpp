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
	Particle(int x, int y, bool firework = false) {
		loc.set(x, y);
		if (firework)
			vel.set(0, ofRandom(-10, -16));
		else {
			vel.set(ofRandom(-1, 1), ofRandom(-1, 1));
			vel *= ofRandom(1, 6);
		}

        acc.set(0, 0);
    }
    
	ofVec2f getVelocity() {
		return vel;
	}

	ofVec2f getLocation() {
		return loc;
	}

	void addForce(ofVec2f force) {
		acc += force;

	}
    
    void update(){
        vel += acc;
        loc += vel;
		acc *= 0;
    }
    
    void show(){
        ofSetColor(255);
        ofDrawCircle(loc, 5);
    }
    
};
