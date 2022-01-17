#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	
	int speed; 
	int gear;
	string color; 

	
	void speedUp() { 
		speed += 10;
	}
	void speedDown() { 
		speed -= 10;
	}
	void show() {  // 상태출력멤버함수
		cout << "============== " << endl;
		cout << "속도: " << speed << endl;
		cout << "기어: " << gear << endl;
		cout << "색상: " << color << endl;
		cout << "============== " << endl;
	}

};

int main(){
	Car *dynCar = new Car;	// 동적객체를 생성할 시 new 라는 키워드에 의해 생성
	dynCar->speed = 100;		
	dynCar->gear = 2;

	dynCar->color = "green";
	dynCar->speedUp();
	dynCar->show();

	delete dynCar; // 동적 객체를 삭제한다. 포인터만 없애준다. 

	return 0;
}