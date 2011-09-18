#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(30);
	server.setup("mpe_server_settings.xml");
	logo.loadImage("lpmt.png");
    ofxXmlSettings settings;
	if(!settings.loadFile("mpe_server_settings.xml")){
		ofLog(OF_LOG_ERROR, "MPE Server -- Couldn't load settings file: mpe_server_settings.xml");
		return;
	}

	fps = settings.getValue("settings:framerate", 30, 0);
    port = settings.getValue("settings:port", 9001, 0);
    nclients = settings.getValue("settings:numclients", 2, 0);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	ofBackground(255);
	ofSetColor(255,255,255);
	ofEnableAlphaBlending();
	logo.draw(30,10);
	ofDisableAlphaBlending();
    ofSetColor(0);
	ofDrawBitmapString("LPMT mpe server running", ofPoint(190, 30) );
	ofDrawBitmapString("on port "+ofToString(port)+" with FPS "+ofToString(fps), ofPoint(190, 45) );
	ofDrawBitmapString("number of expected clients:  "+ofToString(nclients), ofPoint(190, 60) );
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
