class CTest {
public:
	void Func() {
		m_Public++;
		m_Protected++;
		m_Private++;
	}
	int m_Public = 1;

protected:
	int m_Protected = 2;

private:
	int m_Private = 3;// 자식에게도 못준다.
};
class CChild : public CTest {
public:
	void Func() {
	m_Public++;
	m_Protected++;
	m_Private++; // 은닉화
	}
};

void main() {
	CTest t;
	t.m_Public++;
	t.m_Protected++; // 자식 클래스가 아니기에 못 받는다.
	t.m_Private++; // error 당연히 private이니 안됨
}

// CChild& e = (CChild&)t;