class CTest
{
public:

	//CTest(){} // 무조건 필요하다

	CTest(int arg)
	{
		m_Value = arg;
	}

	int m_Value;
};

void main()
{
	CTest t1;		
	CTest t2(3);	
}
