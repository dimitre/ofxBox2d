

#pragma once
#include "ofMain.h"
#include "ofxBox2dBaseShape.h"

class ofxBox2dConvexPoly : public ofxBox2dBaseShape {

private:

	float radius;

public:

    ~ofxBox2dConvexPoly(){};
	//------------------------------------------------
	ofxBox2dConvexPoly();

	//------------------------------------------------
	void setup(b2World * b2dworld, ofPolyline & line);


    void setScale(float scale);

	//------------------------------------------------
	virtual void draw();

	//------------------------------------------------
    void addAttractionPoint(float x, float y, float amt=1);
    void addAttractionPoint(glm::vec2 pt, float amt=1);

	void addRepulsionForce(float x, float y, float amt);
	void addRepulsionForce(glm::vec2 pt, float amt);

    float ghettoRadius;

    b2PolygonShape shape;
		ofVboMesh gpuCachedTesselation;
    ofPolyline polyPts;
    float scale;

};
