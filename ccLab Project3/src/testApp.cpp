#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    cam.initGrabber(320, 240);
    ofBackground(0);
}

//--------------------------------------------------------------
void testApp::update(){
    cam.update();
    
    for(int i=0; i<pixicles.size(); i++)
    {
        if(pixicles[i].position.y < ofGetHeight())
        {
             pixicles[i].update();
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    ofSetColor(0);
        
    ofTranslate((ofGetWidth()/2.0)-(cam.getWidth()/2.0), (ofGetHeight()/2.0)-(cam.getHeight()/2.0));
    
    ofSetColor(150,150,0);
    cam.draw(0, 0);
    
    for(int i=0; i<pixicles.size(); i++)
    {
        if(pixicles[i].position.y < ofGetHeight())
        {
            pixicles[i].draw();
        }
    }

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

    if(key==' ')
    {
        for(int y=0; y<cam.getHeight(); y++)
        {
            for(int x=0; x<cam.getWidth(); x++)
            {
                Pixicle p;
                p.position.set(x, y);
                p.c = cam.getPixelsRef().getColor(x, y);
                p.velocity.set(ofRandom(-10, 10), ofRandom(-10, 10));
                p.acceleration.y = 2;
                pixicles.push_back( p );
            }
        }
    }
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