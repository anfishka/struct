#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

void print_students(vector<STUDENT>& students)
{
	for (auto& student : students)
	{
		cout << "\nStudent: " << student.lastName << "\n" << "Group: " << student.group << "\n" << "Progress: \n";
		for (int i = 0; i < 5; i++)
		{
			cout << student.progress[i] << " ";
		}
		cout << endl;
		cout << endl;
	}

}