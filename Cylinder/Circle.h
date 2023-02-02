#pragma once
#include <iostream>

using namespace std;

class Circle {

private:
	float radius;

public:

	void setRadius(float r);
	float getRadius();
	float getPerimeter();
	float getArea();

	// constructors

	Circle();
	Circle(float r);




};