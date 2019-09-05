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
	bool firework_flag;
	int lifespan;
    
public:
	Particle(int x, int y, bool firework = false) {
		loc.set(x, y);
		firework_flag = firework;
		lifespan = 255;
		if (firework)
			vel.set(ofRandom(-1, 1), ofRandom(-10, -16));
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

	bool done() {
		if (lifespan <= 0)
			return true;
		else
			return false;
	}	
    
    void update(){
		if (!firework_flag) {
			vel *= 0.95;
			lifespan -= 4;
		}

        vel += acc;
        loc += vel;
		acc *= 0;
    }
    
    void show(){
        

		if (firework_flag) {
			ofSetColor(255);
			ofDrawCircle(loc, 5);
		}else {
			ofSetColor(255, lifespan);
			ofDrawCircle(loc, 2);
		}
	}
    
};
