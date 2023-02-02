#pragma once
#include "Circle.h"

class Cylinder : public Circle {

private:
	float height;

public:
	void setHeight(float h);

	float getHeight();
		Cylinder();
		Cylinder(float r, float h);


};

