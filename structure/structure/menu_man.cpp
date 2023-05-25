#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "man.h"

using namespace std;

bool compareByName(MAN& man1, MAN& man2)
{
	if (man1.name == man2.name)
		return man1.lastName < man2.lastName;
	else
		return man1.name < man2.name;
}

void print_sort_by_last_name(vector<MAN>& man)
{
	cout << "\nPeople sorted by name and last name: \n";

	sort(man.begin(), man.end(), compareByName);

	for (auto& m : man)
	{
		cout << m.lastName << " " << m.name << "\n";
	}

	cout << "\n\n";
}

void print_sort_by_birthday(vector<MAN>& man)
{
	sort(man.begin(), man.end(), [&](MAN& a, MAN& b)
		{
			return a.birthday < b.birthday;
		});

	cout << "\nPeople sorted by birthday:\n";
	for (auto& m : man)
	{
		cout << "\nLast Name: " << m.lastName << ", Name: " << m.name << ", Birthday: " << m.birthday << "\n";
	}
	cout << "\n\n";
}

void print_man(vector<MAN>& man)
{
	cout << "\nPeople : \n";
	for (auto& m : man)
	{
		cout << "Name: " << m.name << endl;
		cout << "Last Name: " << m.lastName << endl;
		cout << "Age: " << m.age << endl;
		cout << "Birthday: " << m.birthday << endl;
		cout << endl;
	}
	cout << "\n\n";
}

int calculateAge(const string& birthday)
{
	time_t currentTime = time(nullptr);
	tm* currentDate = localtime(&currentTime);

	int birthDay, birthMonth, birthYear;
	sscanf_s(birthday.c_str(), "%d.%d.%d", &birthDay, &birthMonth, &birthYear);

	int age = currentDate->tm_year + 1900 - birthYear;

	if (birthMonth > currentDate->tm_mon + 1 || (birthMonth == currentDate->tm_mon + 1 && birthDay > currentDate->tm_mday))
	{
		age--;
	}

	return age;
}

vector<MAN> db_man()
{
	vector<MAN> man;
	MAN man_1 = { "Voronin", "Vanya", calculateAge(string("28.02.1990")), string("28.02.1990") };
	man.push_back(man_1);
	MAN man_2 = { "Nolova" , "Kolya", calculateAge("28.02.1990"), "28.02.1990" };
	man.push_back(man_2);
	MAN man_3 = { "Lolodka" , "Marik", calculateAge("28.02.1990"), "28.02.1990" };
	man.push_back(man_3);
	MAN man_4 = { "Tachin" , "Katya", calculateAge("28.02.1990"), "28.02.1990" };
	man.push_back(man_4);

	return man;
}

void delete_man(vector<MAN>& db_man)
{
	if (db_man.empty()) {
		cout << "\nDatabase is empty." << endl;
		return;
	}

	cout << "\nEnter the last name of the person you want to delete: ";
	string lastName;
	cin >> lastName;

	auto it = find_if(db_man.begin(), db_man.end(), [&](MAN& man) {
		return man.lastName == lastName;
		});

	if (it != db_man.end()) {
		db_man.erase(it);
		cout << "Person \"" << lastName << "\" has been deleted." << endl;
	}
	else {
		cout << "\nPerson \"" << lastName << "\" not found." << endl;
	}
}

void change_db_man(vector<MAN>& db_man)
{
	int choice;
	MAN man;
	do
	{
		cout << "\nChoose an action:\n1 - Add person\n2 - Delete person\n3 - Exit\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\nEnter last name of person: ";
			cin >> man.lastName;
			cout << "\nEnter name of person: ";
			cin >> man.name;
			cout << "\nEnter person's birthday: ";
			cin >> man.birthday;
			man.age = calculateAge(man.birthday); 

			db_man.push_back(man);
			print_man(db_man);
			break;
		case 2:
			delete_man(db_man);
			break;
		case 3:
			return;
		}
	} while (choice != 3);
}

void menu_man()
{
	int choice;
	vector<MAN> man = db_man();

	do
	{
		cout << "\nChoose an action, that you want to do: \n\n1 - Print list of people\n2 - Print sorted by last name and name\n3 - Print people sorted by birthday\n4 - Change database of people\n\n5 - Exit\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			print_man(man);
			break;
		case 2:
			print_sort_by_last_name(man);
			break;
		case 3:
			print_sort_by_birthday(man);
			break;
		case 4:
			change_db_man(man);
			break;
		case 5:
			return;
		default:
			print_man(man);
		}
	} while (choice != 5);
}