class CTest
{
public:
	void Func1() const	
	{
	}

	void Func2() const;	

	int m_Value;
};

void CTest::Func2() const
{
}

void main()
{
	const CTest ct;
	ct.Func1();		
	ct.Func2();		

	CTest t;
	t.Func1();		
	t.Func2();		
}
