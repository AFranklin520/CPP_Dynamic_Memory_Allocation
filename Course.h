//Anthony Franklin afranklin18@cnm.edu
//Course.h
//02/09/2022

#ifndef COURSE_H
#define COURSE_H
#include <string>

using namespace std;
class Course
{
private:
	string courseName;
	string* students;
	int numberOfStudents{ 0 };
	int capacity{ 0 };
public:
	Course(const string& courseName, int capacity);
	//Course(const Course& course); // Copy constructor
	~Course();	//destructor
	string GetCourseName() const { return courseName; }
	void AddStudent(const string& name);
	void DropStudent(const string& name);
	string* GetStudents() const { return students; }
	int GetNumberOfStudents() { return numberOfStudents; }


};

#endif