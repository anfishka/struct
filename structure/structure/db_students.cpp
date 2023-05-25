#include <iostream>
#include <vector>
#include "student.h"
using namespace std;

std::vector<STUDENT> db_students()
{
	std::vector<STUDENT> students;
	STUDENT student_1 = { "Voronin" , "BR_18", {10,4,2,10,3} };
	students.push_back(student_1);
	STUDENT student_2 = { "Kanin", "BR_17",  {10,5,2,2,3} };
	students.push_back(student_2);
	STUDENT student_3 = { "Ololoshkin", "BR_16", {12,11,6,10,9} };
	students.push_back(student_3);
	STUDENT student_4 = { "Nubirovich", "BR_18", {10,11,12,4,9} };
	students.push_back(student_4);

	return students;
}
