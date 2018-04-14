#pragma once
#include "Image.h"

class Shape
{
private:
	Color color;

public:
	Shape(Color const& color); 
	//~Shape() {}
	Color getColor() const;
	virtual void draw(Image& image) const = 0 ;
};

