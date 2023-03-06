#include "Student.h"

Project project;
Lecturer lecturer(sv);

Student::Student()
{
	name = "";
}

void Student::setName(string n)
{
	this->name = n;
}

void Student::setProject(string t)
{
	project.setTitle(t);
}

void Student::assignSupervisor(Lecturer sv)
{
	Lecturer sv(sv);
}

void Student::print()
{
	cout << "Student name" << name << endl;
	cout << project.getTitle() << endl;


}