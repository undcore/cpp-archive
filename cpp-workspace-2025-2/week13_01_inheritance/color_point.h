#pragma once
#include <string>
#include "point.h" // **
using namespace std; // **
class ColorPoint : public Point {
private:
	string sColor;
public:
	void setColor(string sColor);
	void showColorPoint();


};