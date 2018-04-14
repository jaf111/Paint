#include "Rectangle.h"
#include "Shape.h"




Rectangle::Rectangle(int x1, int y1, int length, int height, Color& color) : Shape::Shape(color), x1(x1), y1(y1),
length(length), height(height)
{}


void Rectangle::draw(Image& image) const {
	for (int y = y1; y <= (height + y1); y++) {
		image.setPixelColor(x1, y, getColor());
		image.setPixelColor(x1 + length, y, getColor());
	}
	for (int x = x1; x <= (x1 + length); x++) {
		image.setPixelColor(x, y1, getColor());
		image.setPixelColor(x, y1 + height, getColor());
	}
	
}
