class CRequest
{
public:
	static void SLogin() // 정적 멤버 함수
	{
		if(!s_bLogin)
		{
			s_bLogin = true;
		}
	}

	void Request()
	{
		SLogin();
	}

	char* m_RequestType;
	static bool s_bLogin; // 정적 멤버 변수
};

bool CRequest::s_bLogin = false;

void main()
{
	CRequest r1, r2, r3;

	r1.m_RequestType = "List";
	r1.Request(); // false

	r2.m_RequestType = "Download";
	r2.Request(); // true

	r3.m_RequestType = "Upload";
	r3.Request(); // true
}
