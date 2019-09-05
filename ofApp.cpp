#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//ofSetBackgroundAuto(false);
	ofBackground(0);
	
	//ofSetFrameRate(60);
}


//--------------------------------------------------------------
void ofApp::update(){
	
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	//ofEnableAlphaBlending();
	if (ofRandom(1) < 0.1) {
		fireworks.push_back(new Firework());
	}

	for (int i = fireworks.size()-1; i >= 0 ; i--) {
		fireworks[i]->update();
		fireworks[i]->show();
		if (fireworks[i]->done()) {
			fireworks.erase(fireworks.begin() + i);
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
