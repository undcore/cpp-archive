#pragma once
class Rectangle { // public private protected
private: // private으로 닫음
	int iWidth;
	int iHeight;
	//int iLength;
public: // 생성자 선언 , return type 없음
	Rectangle(); // 기본생성자
	Rectangle(int iLength); // 매개변수 1개 생성자
	Rectangle(int iWidth, int iHeight); // 매개변수 2개 생성자
public: // 멤버 변수와 멤버 함수 구분
	int getArea(); // return 값에 대한 고려 후 datatype 결정
	int getCircum(); // 둘레
	bool isSquare(); // 정사각형인지 여부를 판별
};