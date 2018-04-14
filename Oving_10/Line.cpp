#include "Line.h"
#include <iostream>
using namespace std;



Line::Line(int x1, int y1, int x2, int y2, Color color) : Shape::Shape(color), x1(x1), x2(x2),
y1(y1), y2(y2)
{

}

void Line::draw(Image& image) const {
	if (((double)y2 - y1) / (x2 - x1) < 1) {
		for (int x = x1; x <= x2; x++) {
			double y = ((((double)y2 - y1) / (x2 - x1))*(x - x1)) + y1;
			image.setPixelColor(x, y, getColor());
			
		}
	}
	
	else {
		for (int n = y1; n <= y2; n++) {
			double x = (((double)(x2 - x1) / (y2 - y1))*(n - y1)) + x1;
			image.setPixelColor(x, n, getColor());
						
		}
	}
	
}



