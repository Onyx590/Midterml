#ifndef STUDENT_H
#define STUDENT_H	
#include "Project.h"
#include "Lecturer.h"

class Student
{
private:
	string name;

public:
	Student();
	void setName(string);
	void setProject(string);
	void assignSupervisor(Lecturer);
	void print();
};

#endif // !

