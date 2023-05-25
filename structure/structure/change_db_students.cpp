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

void delete_student(vector<STUDENT>& db_students)
{
	if (db_students.empty()) {
		cout << "The student database is empty." << endl;
		return;
	}

	cout << "Enter the last name of the student you want to delete: ";
	string lastName;
	cin >> lastName;

	// »щем студента с указанной фамилией
	auto it = find_if(db_students.begin(), db_students.end(), [&](const STUDENT& student) {
		return student.lastName == lastName;
		});

	if (it != db_students.end()) {
		// ”дал€ем студента из вектора
		db_students.erase(it);
		cout << "Student \"" << lastName << "\" has been deleted." << endl;
	}
	else {
		cout << "Student \"" << lastName << "\" not found." << endl;
	}
}

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
			delete_student(db_students);
		case 3:
			return;
		}
	} while (choice != 3);
	menu_student();
}