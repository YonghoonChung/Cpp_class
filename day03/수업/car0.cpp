#include <iostream>
#include <string>
using namespace std;

class Car {
public: 
	
	int speed; 
	int gear; 
	string color; 

	// 디폴트 생성자가 생략
	//Car(){ }
	
	void speedUp() { 
		speed += 10;
	}

	void speedDown() { 
		speed -= 10;
	}
};

int main(){

	Car myCar; // 객체 생성

	myCar.speed = 100; // 객체 myCar가 클래스의 멤버 변수에 접근
	myCar.gear = 3;
	myCar.color = "red";


	myCar.speedUp(); //myCar 겍체가 멤버 함수 호출
	myCar.speedDown();
	
	return 0;
}