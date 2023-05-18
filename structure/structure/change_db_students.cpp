#include <iostream>
#include <vector>
#include "student.h"
#include "calc_average.h"
#include "print_students.h"
#include "print_best_students.h"
#include "underachievers.h"
#include "db_students.h"
#include "menu_student.h"
using namespace std;

void change_db_students(vector <STUDENT>& db_students)
{
	int choice;
	STUDENT stud;
	do
	{
		cout << "\nChoose an action:\n1 - Add student\n2 - Delete student\n3 - Exit\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter last name of student: ";
			cin >> stud.lastName;
			cout << "Enter group of student: ";
			cin >> stud.group;
			cout << "Enter 5 grades of student: (ATTENTION! ENTER JUST ONE GRADE, THEN PRESS ENTER, MAKE IT 5 TIMES!)";
			for (int i = 0; i < 5; i++)
			{
				cin >> stud.progress[i];
			}
			db_students.push_back(stud);
			print_students(db_students);
			break;
			

		case 2:
			break;
		case 3:
			break;
		}
	} while (choice != 3);
	menu_student();
}