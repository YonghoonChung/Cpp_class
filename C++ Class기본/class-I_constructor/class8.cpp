class CTest
{
public:
	CTest()
	{
	}

	CTest(CTest& obj)	//non-const
	{
	}
};

void main()
{
	CTest t;
	const CTest ct;

	CTest t1(t);	
	CTest t2(ct); /// 복사 생성을 할 수 없다. const 객체로 부터 복사 생성을 할 수 없다.
}
