class CTest
{
public:
	void Assign(int arg)
	{
		m_Value = arg;	// 멤버 변경
	}

	void Func() {}		

	int m_Value;
};

void main()
{
	const CTest t;

	t.m_Value = 1; // const여서 변경 불가 // eror
	t.Assign(1); // const여서 값 변경 불가 
	t.Func();	// 데이터 은닉	
}
