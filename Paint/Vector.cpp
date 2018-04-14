#include "Vector.h"
#include <cmath>

using namespace std;



Vector::Vector() : Matrix::Matrix()
{}

Vector::Vector(int nRows): Matrix::Matrix(nRows, 1, 0){
}

Vector::Vector(const Matrix& other): Matrix::Matrix() {
	if (other.isValid() && other.getColumns() == 1) {
		Matrix::operator=(other);
	}
}

void Vector::set(int row, double value) {
	Matrix::set(row, 0, value);  // ???????? Matrix:: og når bruker man det ikke 
}

double Vector::get(int row) const {
	return Matrix::get(row, 0);
}

double Vector::dot(const Vector& rhs) const {
	if (this->isValid() && rhs.isValid() && rhs.getColumns() == this->getColumns() && rhs.getRows() == this->getRows()) {
		int prod;
		for (int i = 0; i < rhs.getColumns(); i++) {
			prod = this->get(i)*rhs.Matrix::get(i, 0);
		}
		return prod;
	}
	else {
		return nan("");
	}
}

double Vector::lengthSquared() const {
	return pow(Matrix::getRows(), 2);
}

double Vector::length() const {
	return sqrt(this->lengthSquared());
}





