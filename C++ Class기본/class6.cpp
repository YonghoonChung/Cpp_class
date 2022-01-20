class CTest
{
public:
	int m_I = 1;
	const int m_CI = 2;
	static int s_I;	// 외부정의						
	static const int s_CI = 4;	// 정적 const 정수 초기화 예외법칙

	double m_D = 1.1;
	const double m_CD = 2.2;
	static double s_D;// 외부정의		
	static const double s_CD;
};

int CTest::s_I = 3;
double CTest::s_D = 3.3;
const double CTest::s_CD = 4.4;
