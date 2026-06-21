#include <iostream>
#include "rectangle.h"
using namespace std;
Rectangle::Rectangle() { // 기본생성자 구현 , 멤버변수 값 초기화가 목적
	iWidth = 1;
	iHeight = 1;
}
// Rectangle::Rectangle() : Rectangle(1) // 위임 생성자 . 호출
Rectangle::Rectangle(int iLength) {
	this->iWidth = iLength;
	this->iHeight = iLength;
}
Rectangle::Rectangle(int iWidth, int iHeight) { 
	this->iWidth = iWidth;
	this->iHeight = iHeight;
}

int Rectangle::getArea() {
	int iArea;
	iArea = iWidth * iHeight;
	return iArea;
}
int Rectangle::getCircum() { // 둘레
	int iCircum;

	iCircum = 2 * (iWidth + iHeight);
	return iCircum;
}
bool Rectangle::isSquare() { //클래스의 목적은 재사용성 -> 내부에서는 직접적인 출력이 아닌 형태를 만드는 것
	bool bFlag = false;
	if (iWidth == iHeight) {
		bFlag = true;
	}
		return bFlag;
}