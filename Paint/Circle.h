#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	int x1, y1, radius;
public:
	Circle(int x1, int y1, int radius, Color& color) : Shape::Shape(color), x1(x1), y1(y1),
		radius(radius) {}
	virtual void draw(Image& image) const;
};

