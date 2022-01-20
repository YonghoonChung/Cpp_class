#include <iostream>
using namespace std;

class CTest
{
public:
	int m_Value;

	void Show()
	{
		cout << this << endl; // 멤버함수는 클래스 객체에 의해서 공유가능하다
		cout << m_Value << endl;
		cout << this->m_Value << endl;
	}
};

void main()
{
	CTest t1;
	t1.m_Value = 3;
	cout << "t1 address: " << &t1 << endl;
	/*(this->)*/t1.Show(); // this가 이제 붙는다

	CTest t2;
	t2.m_Value = 7;
	cout << "t2 address: " << &t2 << endl;
	t2.Show();
}
