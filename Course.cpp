//Anthony Franklin afranklin18@cnm.edu
//Course.cpp
//02/09/2022

#include "Course.h"

Course::Course(const string& courseName, int capacity) : courseName{ courseName }, capacity{ capacity }
{
	students = new string[capacity];
}

//Course::Course(const Course& course)
//{
//	courseName = course.courseName;
//	capacity = course.capacity;
//	numberOfStudents = course.numberOfStudents;
//	students = new string[capacity];
//	for (int i{ 0 }; i < numberOfStudents; i++)
//		students[i] = course.students[i];
//}

Course::~Course()
{
	//delete[] students;  //Throws memory access violation when not deleting the memberwise copy
}

void Course::AddStudent(const string& name)
{
	numberOfStudents++;
	students[numberOfStudents-1] = name;
}

void Course::DropStudent(const string& name)
{
	for (int i = 0; i < numberOfStudents; ++i)
	{
		if (students[i] == name)
			students[i] = "";

		numberOfStudents--;
	}

}
