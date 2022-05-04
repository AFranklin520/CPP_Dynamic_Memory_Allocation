//Anthony Franklin afranklin18@cnm.edu
//FranklinDynamicMemoryAllocationDemo
//02/09/2022

#include "Course.h"
#include <iostream>

void PrintStudent(const string names[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << endl << names[i] << (i <= size - 1 ? ", " : " ");
	}
	cout << "\nNumber of students = " << size;
}


int main()
{
	cout << "Anthony Franklin afranklin18@cnm.edu\nDynamic Memory Allocation Demo program\n02/09/2022\n\n";
	Course course1("C++ Programming", 10);
	course1.AddStudent("Peter Pan");
	Course course2(course1);
	cout << "Students in course1: ";
	PrintStudent(course1.GetStudents(), course1.GetNumberOfStudents());
	cout << endl;

	cout << "\n Course 2 = Course 1 and we add a student to course2" << endl;
	course2.AddStudent("Lisa Ma");
	cout << "Students in course2: ";
	PrintStudent(course2.GetStudents(), course2.GetNumberOfStudents());
	cout << endl;
	cout << "\n Add another student to course2" << endl;
	course2.AddStudent("Wylie Coyote");

	cout << "Students in course1 now: ";
	PrintStudent(course1.GetStudents(), course1.GetNumberOfStudents());
	cout << endl;

	cout << "Students in course2 again: ";
	PrintStudent(course2.GetStudents(), course2.GetNumberOfStudents());
	cout << endl;

	cout << "\n Now add a student to course1" << endl;
	course1.AddStudent("Wonder Woman");
	cout << "Students in course1 now: ";
	PrintStudent(course1.GetStudents(), course1.GetNumberOfStudents());
	cout << endl;

	cout << "Students in course2 again: ";
	PrintStudent(course2.GetStudents(), course2.GetNumberOfStudents());
	cout << endl;
	return 0;
}