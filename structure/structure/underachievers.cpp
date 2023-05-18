#include <iostream>
#include <vector>
#include "student.h"
#include "calc_average.h"
using namespace std;

void print_under_achievers(vector<STUDENT>& students)
{
	cout << "Underachievers: \n";
	for (auto& student : students)
	{
		float average_grade = calc_average(student.progress, 5);
		if (average_grade <= 5)
		{
			cout << student.lastName << ", " << student.group << "\n";
		}
	}
	cout << "\n\n";
}