#pragma once
#include "Shape.h"
#include <vector>
using namespace std;

class Canvas {
private:
	vector<Shape*> lerret;
public:
	Canvas() {};
	void addShape(Shape* shape);
	void rasterizeTo(Image& image);
};

