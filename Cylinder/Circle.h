#pragma once
#include <iostream>

using namespace std;

class Circle {

private:
	float radius;
	float perimeter;
	float area;

public:

	void setRadius(float r);
	float getRadius();

	void setPerimeter(float p);
	float getPerimeter();

	void setArea(float a);
	float getArea();

	// constructors

	Circle();
	Circle(float r, float p, float a);




};