#pragma once
#include "Shape.h"

class Line : public Shape
{
private:
	int x1, x2,	y2, y1;

public:
	Line(int x1, int y1, int x2, int y2, Color color);
	virtual void draw(Image& image) const;
	
};

