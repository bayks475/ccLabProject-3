//
//  Pixicle.h
//  pixicles
//
//  Created by Selin Baykal on 11/24/12.
//
//

#pragma once

class Pixicle {
public:
    
    void update() {
        velocity += (sin(ofRandom(0.0,2*PI) + (2*PI)) * 30);
        position += velocity;
    }
    
    void draw() {
   
        ofSetColor(ofRandom(255),ofRandom(100,255),0);
        ofRect(position, 2, 2);
    }
    
    ofColor c;
    ofPoint position;
    ofPoint velocity;
    ofPoint acceleration;
    
};