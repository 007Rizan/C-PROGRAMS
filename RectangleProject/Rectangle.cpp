#include "Rectangle.h"


Rectangle::Rectangle() {
	this->length = 1.0;
	this->width = 1.0;

}
Rectangle::Rectangle(double l, double w) {
	this->length = l;
	this->width = w;
}
double Rectangle::getLength() const {
	return this->length;
}
double Rectangle::getWidth() const {
	return this->width;
}
void Rectangle::setLength(double l) {
	this->length = l;
}
void Rectangle::setWidth(double w) {
	this->width = w;
}
double Rectangle::area() const {
	return this->length * this->width;
}
