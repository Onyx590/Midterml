#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>
#include "Lecturer.h"

using namespace std;

class Project 
{
private:
	string title;

public:
	Project();
	void setTitle(string);
	string getTitle();
	void setSupervisor(Lecturer);
	Lecturer getSupervisor();

};


#endif // !PROJECT_H

