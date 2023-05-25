#include <iostream>
#include <vector>
#include "student.h"
#include "calc_average.h"

using namespace std;

void print_best_students(vector<STUDENT>& students)
{
	cout << "\nBest Students: \n";
	for (auto& student : students)
	{

		float average_grade = calc_average(student.progress, 5);
		if (average_grade >= 9)
		{
			cout << student.lastName << ", " << student.group << "\n";
		}

	}
	cout << "\n\n";
}