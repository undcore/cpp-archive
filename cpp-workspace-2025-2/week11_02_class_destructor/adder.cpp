#include <iostream>
#include "adder.h"
using namespace std;

Adder::Adder(int iNo1, int iNo2) {
	this->iNo1 = iNo1;
	this->iNo2 = iNo2;
}
int Adder::process() {
	return iNo1 + iNo2;
}