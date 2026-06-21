#include <iostream>
#include "color_point.h"


void ColorPoint::setColor(string sColor) {
	this->sColor = sColor;
}
void ColorPoint::showColorPoint(){
	cout << sColor << ":";
	showPoint();
}