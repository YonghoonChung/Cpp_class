#include <iostream>
using namespace std;

class CFamily						
{
protected: // 상속관계에서 자식 클래서에게만 접근 허용	
// 상속관계가 이뤄질것이라는 것을 인지				
	char* m_FamilyName;	// 멤버변수 지정(정의)

public:								
	void SetFamilyName(char* arg)	
	{
		m_FamilyName = arg;
	}
};

class CName : public CFamily /*public AFamily*/ // 상속을 해준다 , 자식 : 부모 
//자바 extends 가 들어간다
// 다중 상속을 해준다
{
private:							
	char* m_Name;

public:								
	void SetName(char* arg);		
	void ShowName()					
	{
		cout << m_FamilyName << " " << m_Name << endl;
	}
};

void CName::SetName(char* arg)	// 외부에서 함수를 정의하여 값을 정의한다
// 일반함수처럼 취급	
{
	m_Name = arg;
}

void main()
{
	CName name;
	name.SetFamilyName("Kim");
	name.SetName("Do Hyung");
	name.ShowName();
}
