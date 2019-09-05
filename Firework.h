#pragma once
#include "Particle.hpp"

class Firework {
private:
	Particle* firework;
	vector<Particle*> particles;
	ofVec2f gravity;
	bool exploded = false;

public:
	Firework() {
		firework = new Particle(ofRandom(0, ofGetWidth()), ofGetHeight(), true);
		gravity.set(0, 0.2);

	}

	void update() {
		if (!exploded) {
			firework->addForce(gravity);
			firework->update();
			
			if (firework->getVelocity().y >= 0) {
				exploded = true;
				explode();
			}
		}
		for (int i = particles.size()-1; i >= 0 ; i--) {
			particles[i]->addForce(gravity);;
			particles[i]->update();
			if (particles[i]->done()) {
				particles.erase(particles.begin() + i);
			}
		}
		
	}

	void explode() {
		for (int i = 0; i < 100; i++) {
			particles.push_back(new Particle(firework->getLocation().x, firework->getLocation().y));
		}
	}

	bool done() {
		if (exploded && particles.size() == 0)
			return true;
		else
			return false;
	}

	void show() {
		if (!exploded) {
			firework->show();
		}

		for (int i = 0; i < particles.size(); i++) {
			particles[i]->show();
		}

	}

};