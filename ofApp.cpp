#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//ofSetBackgroundAuto(false);
	ofBackground(0);
	ofSetBackgroundAuto(false);
	ofSetFrameRate(60);
}


//--------------------------------------------------------------
void ofApp::update(){
	ofSetColor(0, 0, 0, 20);
	ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::draw(){
	//ofEnableAlphaBlending();

	//ofBackground(0, 300);
	; //changed the last value from 18 to 5 makes it look more streaky
	

	if (ofRandom(1) < 0.01) {
		fireworks.push_back(new Firework());
	}

	for (int i = fireworks.size()-1; i >= 0 ; i--) {
		fireworks[i]->update();
		fireworks[i]->show();
		if (fireworks[i]->done()) {
			cout << "fireworks deleted" << endl;
			fireworks.erase(fireworks.begin() + i);
			cout << fireworks.size() << endl;
		}
	}
	//ofDisableAlphaBlending();
	
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
