#include "Cylinder.h"
#include "Circle.h"

void Cylinder::setHeight(float h)
{
	height = h;
}

float Cylinder::getHeight()
{
	return height;
}

Cylinder::Cylinder()
{
	height = 0;

}

Cylinder::Cylinder(float r, float h)
{
	setHeight(h);
	setRadius(r);
}

