class Circle {
public:
	double radius; // ������ �ʵ�(����, ��� ����)

	Circle() { // default ������
		radius = 1;
	}

	Circle(double radius) { // ������
		radius = new Radius;
	}

	double area() { // ��� �Լ�
		return radius * radius * 3.14159l
	}
};

int main() {
	Circle circle1;
	Circle circle2(10);
	return 0;
}