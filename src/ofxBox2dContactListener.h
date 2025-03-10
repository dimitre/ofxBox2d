
#pragma once
#include "ofMain.h"
#include "Box2D.h"

/*

 ***    THIS NEEDS WORK!    ***

*/

class ofxBox2dContactListener : public b2ContactListener {

public:

	virtual void BeginContact(b2Contact* contact) {
    }

	virtual void EndContact(b2Contact* contact) {
    }

	ofxBox2dContactListener() {
	}



	virtual void contactAdd(glm::vec2 p) {
	}
	virtual void contactRemove(glm::vec2 p) {
	}
};
