#include <iostream>
using namespace std;

class CTest
{
public:
	CTest() : m_C1(1){ //CTest() : 생성자 
	}

	const int m_C1;		// 초기화 1 
	// const(한정자) : 직접 초기화 해주어야 한다 필수적으로
	// 대입을 통해서 값을 변경할 수 없다. 
	const int m_C2 = 2; // 초기화 2 
	// 클래스 내부 초기화
};

void main()
{
	CTest t;
	cout << t.m_C1 << " " << t.m_C2 << endl;
} 
