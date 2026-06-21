#include <iostream>
#include "color_point.h"

int main() {
	cout << endl;
	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
}