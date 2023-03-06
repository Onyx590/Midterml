#include "Project.h"

Project::Project()
{
	title = "";
}

void Project::setTitle(string t)
{
	this->title = t;
}

string Project::getTitle()
{
	return title;
}

void Project::setSupervisor(Lecturer sv)
{
	Lecturer sv(sv);
}

Lecturer Project::getSupervisor()
{
	
	return sv.getName();
}