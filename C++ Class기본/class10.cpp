#include <iostream>
using namespace std;

class CTest
{
public:
	int m_Value;

	void Func()
	{
		cout << m_Value << endl;	
	}

	static void SFunc() // 정적 멤버 함수
	{
		cout << m_Value << endl;	
	}
};