#include <iostream>
using namespace std;

class CParent
{
public:
	CParent()
	{
		cout << "CParent Constructor" << endl;
	}

	CParent(const CParent& obj)
	{
		cout << "CParent Copy Constructor" << endl;
	}
};

class CTest : public CParent
{
public:
	CTest()
	{
	}

	CTest(const CTest& obj)
	{
	}

	int m_Value;
};

void main()
{
	CTest t;		
	t.m_Value = 1;
	CTest t1 = t;	
}
