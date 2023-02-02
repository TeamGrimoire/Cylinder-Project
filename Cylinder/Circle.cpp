#include "Circle.h"
#include "Cylinder.h"

void Circle::setRadius(float r)
{
	radius = r;
}

float Circle::getRadius()
{
	return radius;
}

Circle::Circle()
{
	radius = 0;

}

Circle::Circle(float r)
{
	setRadius(r);
}
