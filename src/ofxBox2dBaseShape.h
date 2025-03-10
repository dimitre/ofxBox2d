#pragma once

#include "ofMain.h"
#include "Box2D.h"
#include "ofxBox2dUtils.h"

class ofxBox2dBaseShape {

public:
	b2FixtureDef	fixture;
	b2BodyDef		bodyDef;
	b2Body*			body;
    string          name = "unset";

	bool			alive;
	bool			setMassFromShape;

	float			density;
	float			bounce;
	float			friction;
	ofxBox2dBaseShape();

	//----------------------------------------
	~ofxBox2dBaseShape();

	//----------------------------------------
	bool isBody();

	//----------------------------------------
    static bool shouldRemove(shared_ptr<ofxBox2dBaseShape> shape);
    static bool shouldRemoveOffScreen(shared_ptr<ofxBox2dBaseShape> shape);
	bool isFixed();
	bool isSleeping();

	//----------------------------------------
	b2World* getWorld();

	//----------------------------------------
	virtual void create();

	//------------------------------------------------
	virtual void setBounce(float val);

	//------------------------------------------------
	virtual void setDensity(float val);

	//----------------------------------------
	virtual void setFriction(float val);

	//------------------------------------------------
	virtual void setPhysics(float density, float bounce, float friction);


	//------------------------------------------------
	void* setData(void*data);

	//------------------------------------------------
	void* getData();

	//------------------------------------------------
	virtual void setFilterData(b2Filter filter);

	//------------------------------------------------
	virtual void enableGravity(bool b);

	//------------------------------------------------
	virtual void setFixedRotation(bool b);
	float getRotation();
	void setRotation(float angle);

	//------------------------------------------------
	virtual void setPosition(float x, float y);
	virtual void setPosition(glm::vec2 p);

	//------------------------------------------------
	glm::vec2 getPosition();
	glm::vec2 getB2DPosition();

	//------------------------------------------------
	glm::vec2 toOf(const b2Vec2 v);
	float toOf(const float f);

	b2Vec2 toB2d(const glm::vec2 pt);
	float toB2d(const float f);

	//------------------------------------------------
	virtual void setVelocity(float x, float y);
	virtual void setVelocity(glm::vec2 p);
	glm::vec2 getVelocity();

    //------------------------------------------------
    virtual void setLinearDamping(float f);
    virtual void setAngularDamping(float f);



	//------------------------------------------------
	virtual void addForce(glm::vec2 frc, float scale);

	//------------------------------------------------
	virtual void addImpulseForce(glm::vec2 point, glm::vec2 force);

	//------------------------------------------------
	virtual void addRepulsionForce(glm::vec2 pt, float radius, float amt);

	//------------------------------------------------
	virtual void destroy();

	//------------------------------------------------
	virtual void update();
	virtual void draw();

};
