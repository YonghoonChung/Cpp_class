#include <iostream>
#include "Course.h"
using namespace std;

int main() {
	Course course1("C++", 10);
	Course course2(course1);

	course1.addStudent("kim");
	course2.addstudent("park");
	
	cout << "Student in course1 : " << course1.getStudents()[0] << endl;
	cout << "Student in course2 : " << course2.getStudents()[0] << endl;
}