#include <iostream>
#include "circle.h"
using namespace std;

Circle::Circle() {
	iRadius = 1;
};
Circle::Circle(int iRadius) {
	this->iRadius = iRadius;
};
double Circle::getArea() {
	double dArea;
	dArea = 3.14 * iRadius * iRadius;
	return dArea;
	
}