struct STest
{
	char* m_Name;
};

void main()
{
	struct STest s1;	// C의 구조체 -> 객체
	s1.m_Name = "C";		

	STest s2;			// C++ 객체
	s2.m_Name = "C++";	
}
