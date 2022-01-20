#include <iostream>
using namespace std;

struct STest
{
	char m_Char;
	int m_Int;
};

class CTest
{
private:
	char m_Char;
	int m_Int;
	static int s_Value;	// Class Add

public:
	void SetMember(char arg1, int arg2)	// Class Add
	{
		m_Char = arg1;
		m_Int = arg2;
	}

	void ShowMember()	// Class Add
	{
		cout << m_Char << endl;
		cout << m_Int << endl;
	}
};

int CTest::s_Value;

// 11-18
void main()
{
	CTest t1;
	t1.SetMember('A', 1);
	t1.ShowMember();

	CTest t2;
	t2.SetMember('B', 2);
	t2.ShowMember();
}
