#include <iostream>
using namespace std;

class CTest
{
public:
	static void SFunc()
	{
		cout << "SFunc" << endl;	
	}
};

void main()
{
	CTest t;
	t.SFunc();		

	CTest* pT = &t;
	pT->SFunc();	

	CTest::SFunc();	// 이렇게 출력을 추천한다.
}
