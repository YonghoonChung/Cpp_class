#include<iostream>
#include<string>

using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;

public:
	int getSpeed();
	void setSpeed(int s);
	void setSpeed(double s);
};

int Car::getSpeed() {
	return speed;
}
void Car::setSpeed(int s) {
	speed = s;
}
void Car::setSpeed(double s) {
	//speed = s;
	speed = (int)s;
}

int main(void) {
	Car myCar;
	myCar.setSpeed(90);
	myCar.setSpeed(85.4);
		
	cout << "차의 속도는 " << myCar.getSpeed() << endl;
	return 0;
}
