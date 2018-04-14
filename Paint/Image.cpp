#include "Image.h"
using namespace std;

Image::Image( int width, int height ) : width(width), height(height) {
	data = new Color[width * height];
}

Image::~Image()  {
	delete[] data;
	data = nullptr;
}

int Image::getWidth() const {
	return width;
}
int Image::getHeight() const  {
	return height;
}

const Pixel * Image::getScanLine(int line) const  {
	return &data[width * line];
}
Pixel * Image::getScanLine(int line) {
	return &data[width * line];
}

Color Image::getPixelColor( int x, int y ) const {
	Color color;
	color = data[y* width + x]; 
	return color;
}
void Image::setPixelColor( int x, int y, const Color &color ) {
	if(x < width || y < height){ 
		data[y* width + x] = color;
	}
}

void Image::fill( const Color &color ) {
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			setPixelColor(i,j, color);
		}
   }
}
