#include "Canvas.h"
#include "Shape.h"
#include <vector>
#include <iostream>
using namespace std;

void Canvas::addShape(Shape* shape){
	lerret.push_back (shape);           
}

void Canvas::rasterizeTo(Image& image) {
	for (int i = 0; i < lerret.size(); i++) {
		lerret.size();
		lerret[i]->draw(image);
	}
}