class CTest
{
	char* m_Name; // private
	
public:
	int m_Level;
};

struct STest
{
	char* m_Name;

private:
	int m_Level;
};

void main()
{
	CTest c;
	c.m_Name = "Class"; //클래스에서 private	
	c.m_Level = 2;			

	STest s; // struct이므로 default는 public임
	s.m_Name = "Struct";	
	s.m_Level = 1; // struct에서 private			
}
