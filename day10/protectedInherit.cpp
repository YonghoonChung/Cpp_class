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
class CChild : protected CTest { // protected로 주는데 이건 private 처럼 한다.
public:
	void Func() {
	m_Public++;
	m_Protected++;
	m_Private++; // 은닉화
	}
};

void main() {
	CChild c; // 얘는 외부라서 못한다
	c.m_Public++;
	c.m_Protected++;
	c.m_Private++; 
}
