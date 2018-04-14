#include "halfcircle.h"
#include "Shape.h"
#include <iostream>
#include <math.h>

using namespace std;

void halfcircle::draw(Image& image) const {

	int r2 = radius* radius;
	for (int x = x1 - radius; x <= x1 + radius; x++) {
		int y2 = (int)((double)-sqrt(r2 - ((x - x1)*(x - x1)))) + y1;
		image.setPixelColor(x, y2, getColor());

	}
}