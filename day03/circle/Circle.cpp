class Circle {
public:
	double radius; // 데이터 필드(변수, 멤버 변수)

	Circle() { // default 생성자
		radius = 1;
	}

	Circle(double radius) { // 생성자
		radius = new Radius;
	}

	double area() { // 멤버 함수
		return radius * radius * 3.14159l
	}
};

int main() {
	Circle circle1;
	Circle circle2(10);
	return 0;
}