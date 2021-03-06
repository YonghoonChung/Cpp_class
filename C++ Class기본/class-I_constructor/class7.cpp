#include <iostream>
using namespace std;
//복사 생성자는 생정자의 중복정의이다.
class CTest
{
public:
	CTest()
	{
		m_Value = 0;
	}

	CTest(const CTest& obj) // 복사 생성자
	{
		m_Value = 2;
	}

	int m_Value;
};
//객체가 다른 객체로부터 복사생성이 되는 경우 복사 생성자가 호출되고, 대입될 경우에는 
// 복사 대입 연산자가 호출된다는 사실이다.
void main()
{
	CTest t;
	t.m_Value = 1;

	CTest t1(t);
	CTest t2 = t; // 복사한다
	CTest t3; t3 = t;

	cout << "t1: " << t1.m_Value << endl; // 2
	cout << "t2: " << t2.m_Value << endl; // 2
	cout << "t3: " << t3.m_Value << endl; // 1
}
