#include <iostream>
using namespace std;

class CTest
{
public:
	int m_I;
	static int s_I; // 정적 멤버 변수 선언
};

int CTest::s_I = 2; // 꼭 외부에서 선언한다. like 전역 변수
// 일반 함수처럼 일반 데이터 처럼 선언하는 것처럼 사용

void main()
{
	CTest t1;
	t1.m_I = 1;
	t1.s_I = 2;	//메모리 주소를 공유한다

	CTest t2;
	t2.m_I = 3;
	t2.s_I = 4;	//메모리 주소를 공유한다

	cout << "t1: " << t1.m_I << " " << t1.s_I << endl; // 1 4
	cout << "t2: " << t2.m_I << " " << t2.s_I << endl; // 3 4
}
