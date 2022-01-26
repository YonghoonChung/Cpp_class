#include <iostream>
using namespace std;

void grade(double num) {
	int score = 0;
	if (num < 4) {
		score = 1;
	}
	else if (num < 11) {
		score = 2;
	}
	else if (num < 23) {
		score = 3;
	}
	else if (num < 40) {
		score = 4;
	}
	else if (num < 60) {
		score = 5;
	}
	else if (num < 77) {
		score = 6;
	}
	else if (num < 89) {
		score = 7;
	}
	else if (num < 96) {
		score = 8;
	}
	else {
		score = 9;
	}
	cout << score << "등급 입니다";
}

void avg(int num) {
	double score = 0;
	if (num == 1) {
		score = (0 + 4) / 2.0;
	} else if (num == 2) {
		score = (4 + 11) / 2.0;
	}else if (num == 3) {
		score = (11 + 23) / 2.0;
	}else if (num == 4) {
		score = (23 + 40) / 2.0;
	}else if (num == 5) {
		score = (40 + 60) / 2.0;
	}else if (num == 6) {
		score = (60 + 77) / 2.0;
	}else if (num == 7) {
		score = (77 + 89) / 2.0;
	}else if (num == 8) {
		score = (89 + 96) / 2.0;
	}else if (num == 9) {
		score = (96 + 100) / 2.0;
	}else {
		score = 0;
	}
	cout << "평균 " << score << "입니다";
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	double num;
	cout << "수능 성적 비율을 입력하세요 : \n";
	cin >> num;

	grade(num);

	return 0;
}