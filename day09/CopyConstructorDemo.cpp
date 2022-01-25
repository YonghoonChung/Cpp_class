#include <iostream>
#include "CircleWithDestructor.h"
using namespace std;

int main(void) {
	Circle circle(5); //circle 생성
	Circle circle2(circle); //복사 생성자 사용하여 circle2생성

	cout << "After creating circle2 from circle : " << endl;
	cout << "\tcircle.getRadius() returns: " << circle.getRadius() << endl;
	cout << "\tcircle2.getRadius() returns: " << circle2.getRadius() << endl;

	circle.setRadius(10.5);
	circle2.setRadius(20.5);


	cout << "\tcircle.getRadius() returns: " << circle.getRadius() << endl;
	cout << "\tcircle2.getRadius() returns: " << circle2.getRadius() << endl;
	return 0;
}