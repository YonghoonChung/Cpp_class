#include <iostream>
using namespace std;

class CTest
{
private:
	char m_Char;			
	int m_Int;				
	static int s_Member;	

public:
	void ShowSize()			
	{
		cout << sizeof(CTest) << endl;
	}
};

void main()
{
	CTest t;
	t.ShowSize();			
}
