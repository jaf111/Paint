#pragma once
#include "Shape.h"


class Rectangle : public Shape
{
private:
	int x1, y1, length, height;
public:
	Rectangle(int x1, int y1, int length, int height, Color& color);
	virtual void draw(Image& image) const; 
};

