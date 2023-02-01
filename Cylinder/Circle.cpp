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

void Circle::setPerimeter(float p)
{
	perimeter = p;
}

float Circle::getPerimeter()
{
	return perimeter;
}

void Circle::setArea(float a)
{
	area = a;
}

float Circle::getArea()
{
	return area;
}

Circle::Circle()
{
	radius == 0;
	perimeter = 0;
	area = 0;

}

Circle::Circle(float r, float p, float a, float h)
{
	setRadius(r);
	setPerimeter(p);
	setArea(a);

}
