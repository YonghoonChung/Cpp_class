#include <iostream>
using namespace std;

class CTest
{
public:
	int m_Value;

	void Show()
	{	
		cout << this << endl;
		cout << m_Value << endl;
	}
};

void main()
{
	CTest t;
	CTest* pT = &t; // 객체 t의 주소값을 포인팅하는 변수
	pT->Show();		// OK // 객체의 포인터를 이용하여 멤버함수 호출
	//

	pT = NULL;		// 주소를 모르게 된다.
	pT->Show();		// Runtime error
}
