//정주호 250912
#include <iostream>
using namespace std;

int main() {
	// 초를 입력받아서 시, 분, 초로 변환하는 프로그램
	int total_seconds;
	cout << "초를 입력하세요: ";
	cin >> total_seconds;
	int hours = total_seconds / 3600;
	int minutes = (total_seconds % 3600) / 60;
	int seconds = total_seconds % 60;
	cout << hours << "시간 " << minutes << "분 " << seconds << "초" << endl;
}