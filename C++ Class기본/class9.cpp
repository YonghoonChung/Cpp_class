#include <iostream>
using namespace std;

class CTest
{
public:
	int m_Value;

	void Show()
	{
		cout << this << endl;
	}
};

void main()
{
	CTest* pT = NULL; // this는 NULL을 가리킨다.
	pT->Show();	// OK		
}
