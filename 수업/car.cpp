class Car {
public:
	
	int speed; 
	int gear; 
	string color; 

// 이곳에는 default 생성자가 없다
	
	void speedUp() {
		speed += 10;
	}

	void speedDown() { 
		speed -= 10;
	}
};

// Car myCar; -> 객체 사용.
// myCar.speed = 100;
// myCar.speedDown();