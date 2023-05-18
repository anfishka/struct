#include <iostream>
#include <vector>
#include "student.h"
#include "db_students.h"
#include "print_students.h"
#include "print_best_students.h"
#include "underachievers.h"
#include "change_db_students.h"

using namespace std;

void menu_student()
{
	int choice;
	vector<STUDENT> students = db_students();
	do
	{
		cout << "Choose an action, that you want to do: \n\n1 - Print list of students\n2 - Print a list of the best students\n3 - Print a list with underachievers\n4 - Change database of students\n5 - Exit\n";
		cin >> choice;
		
		switch (choice)
		{

		case 1:
			print_students(students);
			break;
		case 2:
			print_best_students(students);
			break;
		case 3:
			print_under_achievers(students);
			break;
		case 4:
			change_db_students(students);
			break;
		case 5:
			break;
		default:
			print_students(students);
		}
	} while (choice != 5);
		
	
}