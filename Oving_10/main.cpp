#include <iostream>
#include "Image.h"
#include "Matrix.h"
#include "Vector.h"
#include "Shape.h"
#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Canvas.h"
#include "halfcircle.h"

using namespace std;

int main(){
	bool q = true;
	while (q) {
		int x;
		cout << "0 -> Quit " << endl << "1 -> Oppg. 1" << endl;
		cout << "2 -> Oppg. 2" << endl << "3 -> Oppg. 4" << endl;
		cout << "4 -> Oppg. 5" << endl << "5 -> Oppg. 6" << endl;
		cin >> x;
		cout <<  "\n\n";

		switch (x) {
		case 0:
			q= false;
			break;
		
		case 1:
		{
			Matrix a(3, 3, 8);
			cout << "Matrise A: " << endl << a << endl;
			Vector b(3);
			b.set(0, 5);
			b.set(1, 5);
			b.set(2, 5);
			cout << "Vektor B: " << endl << b << endl;

			Vector prod = a*b;
			cout << "Prikkproduktet er: " << endl << prod << endl;
			break;
		}
		case 2:
		{
			Image image1(500, 500);
			Image image2(500, 500);
			
			Color white(255, 255, 255);
			Color cf(193, 84, 193);
			Color red(255, 0, 0);
			
			image1.fill(cf);
			
			image2.fill(white);
			
			image2.setPixelColor(20, 20, red);
			image2.setPixelColor(21, 20, red);
			image2.setPixelColor(20, 19, red);
			image2.setPixelColor(20, 19, red);
			Color color = image2.getPixelColor(20, 20);
			cout << (int)color.red << ", " << (int)color.green << ", " << (int)color.blue << endl;
			
			saveImage(image1, "crayola_fuchsia.bmp");
			saveImage(image2, "white_red.bmp");
			system("mspaint crayola_fuchsia.bmp");
			system("mspaint white_red.bmp");
			
			break;
		}
		case 3:
		{
			Color red(255, 0, 0);
			Color white(255, 255, 255);
			Image image1(500, 500);
			image1.fill(white);
			Line line(0, 0, 100, 50, red);
			line.draw(image1);
			saveImage(image1, "line.bmp");
			Line line2(0, 0, 100, 200, red);
			line2.draw(image1);
			saveImage(image1, "line2.bmp");
			system("mspaint line2.bmp");
		}
		case 4:
		{
			Color red(255, 0, 0);
			Color white(255, 255, 255);
			Image image1(500, 500);
			image1.fill(white);
			
			Rectangle rec(60, 20, 100, 60, red);
			rec.draw(image1);
			saveImage(image1, "circle.bmp");
					
			Circle cir(100, 150, 50, red);
			cir.draw(image1);
			
			saveImage(image1, "circle.bmp");
			system("mspaint circle.bmp");
			break;
		}
		
		case 5:
		{
			Image image1(500, 500);
			Color white(255, 255, 255);
			Color black(0, 0, 0);
			Color red(255, 0, 0);
			Color green(0, 255, 0);
			Color blue(0, 0, 255);
			Color yellow(255, 255, 0);
			image1.fill(green);
			
			Canvas smiley;
			Circle eye1(130, 300, 30, red);
			Circle eye2(250, 300, 30, black);
			Circle face(185, 280, 120, blue);
			halfcircle smile(185, 240, 50, yellow);
			
			smiley.addShape(&smile);
			smiley.addShape(&eye1);
			smiley.addShape(&eye2);
			smiley.addShape(&face);
						
			smiley.rasterizeTo(image1);
			saveImage(image1, "smileface.bmp");
			system("mspaint smileface.bmp");
			
			break;
		}
		}

	}
	return 0;
}
