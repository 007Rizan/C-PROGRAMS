#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle {
public:

	Rectangle();
	Rectangle(double l, double w);
	double getLength() const;
	double getWidth() const;
	void setLength(double l);
	void setWidth(double w);
	double area() const;

private:
	double length;
	double width;
};
