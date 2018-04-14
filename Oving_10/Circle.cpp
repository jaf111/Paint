#include "Circle.h"
#include "Shape.h"
#include <iostream>
#include <math.h>

using namespace std;

void Circle::draw(Image& image) const {
	
	int r2 = radius* radius;
	for (int x = x1 -radius; x <= x1 + radius; x++) {
		int y = (int)((double)sqrt(r2 - ((x-x1)*(x - x1)))) + y1;
		int y2 = (int)((double)-sqrt(r2 - ((x - x1)*(x - x1)))) + y1;
		image.setPixelColor(x, y, getColor());
		image.setPixelColor(x, y2, getColor());
		cout << x << " " << y << endl;
	}
		
}
