#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp
{
    private:
        // Images
        ofImage testJPGImage;
        int img01x, img01y;

        ofImage testPNGImage;
        int img02x, img02y;
    
        ofImage* pSelectedImage;
    
        void setupImages();
        void drawImages();
    
    
        // Shaders
        ofShader shader;
        void setupShaders();
        void drawShaders();
    
    
    
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
