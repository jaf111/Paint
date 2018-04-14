#include "Shape.h"
#include "Image.h"



Shape::Shape(Color const& color) : color(color){
}

Color Shape::getColor() const {
	return color;
}


